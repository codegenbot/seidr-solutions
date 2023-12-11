import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re


def dice_game(n, m):
    return (n - 1) / (n * m)


n = int(input())
m = int(input())
print(dice_game(n, m))