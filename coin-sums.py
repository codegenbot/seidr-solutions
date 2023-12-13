import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def coin_sums(cents):
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickels = cents // 5
    cents %= 5
    pennies = cents
    
    return quarters, dimes, nickels, pennies

# Read input from user
cents = int(input())

# Call the function and print the output
print(*coin_sums(cents))