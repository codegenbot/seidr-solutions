import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

n = int(input())
m = int(input())

total_possibilities = n * m
successful_possibilities = (n-1) * m
probability = successful_possibilities / total_possibilities

print(probability)