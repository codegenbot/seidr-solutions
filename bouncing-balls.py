import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""

"""
if __name__ == '__main__':
    start_height = float(input())
    first_bounce = float(input())
    num_bounces = int(input())
    bounciness_index = first_bounce/start_height
    distance_traveled = 0
    for i in range(num_bounces):
        distance_traveled += start_height + (start_height * bounciness_index)
        start_height = start_height * bounciness_index
    print(distance_traveled)
