import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

for _ in range(num_bounces):
    total_distance += 2 * (bounciness_index * total_distance)
    
print(total_distance)