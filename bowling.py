import os
import sys
import numpy as np
import math
import collections
import itertools
import queue
import re
"""
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100

* Notice that scoring values should be determined at the time they are earned.
Hint:
For whatever reason, it is impossible for the Pins to become negative in this world.. maybe Pins HATE bowling alleys?..
If there's a public subreddit for whatever topic this is, let me know and I'll make a post to see if any other geniuses can break your code. there are so many different ways to code bowling for this problem :)
Now, 
"""
if __name__ == '__main__':
