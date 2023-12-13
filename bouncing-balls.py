import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

# Read input
starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

# Calculate bounciness index
bounciness_index = first_bounce_height / starting_height

# Calculate total distance traveled
total_distance = starting_height + (2 * first_bounce_height * (1 - bounciness_index ** num_bounces)) / (1 - bounciness_index)

# Print output
print(total_distance)