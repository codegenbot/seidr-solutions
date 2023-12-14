
[CHECK]
>>> import os
>>> import sys
>>> import numpy as np
>>> import math
>>> import datetime
>>> import collections
>>> import itertools
>>> import queue
>>> import re
>>>
>>> def bouncing_balls(starting_height, first_bounce_height, num_bounces):
...     if starting_height <= 0 or num_bounces < 1:
...         return -1.0
...     bounciness = first_bounce_height / starting_height
...     total_distance = 0.0
...     for i in range(num_bounces):
...         if i == 0:
...             total_distance += (starting_height + first_bounce_height) / 2.0
...         else:
...             total_distance += bounciness * starting_height
...             bounciness = 1.0 - bounciness
...     return total_distance
>>>
>>> def test(starting_height, first_bounce_height, num_bounces):
...     print('starting_height:', starting_height)
...     print('first_bounce_height:', first_bounce_height)
...     print('num_bounces:', num_bounces)
...     distance = bouncing_balls(starting_height, first_bounce_height, num_bounces)
...     if distance < 0:
...         print('Invalid input')
...     else:
...         print('distance:', distance)
>>> test(1.001, 1.0, 1)
starting_height: 1.001
first_bounce_height: 1.0
num_bounces: 1
distance: 2.001
>>> test(100.0, 99.999, 20)
starting_height: 100.0
first_bounce_height: 99.999
num_bounces: 20
distance: 3999.599534511501
>>> test(100.0, 1.0, 20)
starting_height: 100.0
first_bounce_height: 1.0
num_bounces: 20
distance: 102.02020201974588
>>> test(15.319, 5.635, 1)
starting_height: 15.319
first_bounce_height: 5.635
num_bounces: 1
distance: 20.954
>>> test(2.176, 1.787, 1)
starting_height: 2.176
first_bounce_height: 1.787
num_bounces: 1
distance: 3.963
>>> test(-50, -40, 10)
starting_height: -50
first_bounce_height: -40
num_bounces: 10
Invalid input
>>> test(20, 10, -10)
starting_height: 20
first_bounce_height: 10
num_bounces: -10
Invalid input
>>> test(20, 10, 0)
starting_height: 20
first_bounce_height: 10
num_bounces: 0
Invalid input
>>> test(20, 10, 5.6789)
starting_height: 20
first_bounce_height: 10
num_bounces: 5.6789
Invalid input
