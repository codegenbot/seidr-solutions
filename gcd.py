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
Given two integers, return the greatest common divisor (GCD) of the two integers.
For example, given the integers 12 and 8, the function should return 4.
Given the integers 12 and 16, the function should return 4.
Given the integers 12 and 18, the function should return 6.
Given the integers 12 and 20, the function should return 4.
Given the integers 12 and 24, the function should return 12.
Given the integers 12 and 28, the function should return 4.
Given the integers 12 and 30, the function should return 6.
Given the integers 12 and 32, the function should return 4.
Given the integers 12 and 36, the function should return 12.
Given the integers 12 and 40, the function should return 4.
Given the integers 12 and 44, the function should return 4.
Given the integers 12 and 48, the function should return 12.
Given the integers 12 and 50, the function should return 2.
Given the integers 12 and 52, the function should return 4.
Given the integers 12 and 56, the function should return 4.
Given the integers 12 and 60, the function should return 12.
Given the integers 12 and 64, the function should return 4.
Given the integers 12 and 68, the function should return 4.
Given the integers 12 and 72, the function should return 12.
Given the integers 12 and 76, the function should return 4.
Given the integers 12 and 80, the function should return 4.
Given the integers 12 and 84, the function should return 4.
Given the integers 12 and 88, the function should return 4.
Given the integers 12 and 92, the function should return 4.
Given the integers 12 and 96, the function should return 12.
Given the integers 12 and 100, the function should return 4.
Given the integers 12 and 104, the function should return 4.
Given the integers 12 and 108, the function should return 12.
Given the integers 12 and 112, the function should return 4.
Given the integers 12 and 116, the function should return 4.
Given the integers 12 and 120, the function should return 12.
Given the integers 12 and 124, the function should return 4.
Given the integers 12 and 128, the function should return 4.
Given the integers 12 and 132, the function should return 4.
Given the integers 12 and 136, the function should return 4.
Given the integers 12 and 140, the function should return 4.
Given the integers 12 and 144, the function should return 12.
Given the integers 12 and 148, the function should return 4.
Given the integers 12 and 152, the function should return 4.
Given the integers 12 and 156, the function should return 4.
Given the integers 12 and 160, the function should return 4.
Given the integers 12 and 164, the function should return 4.
Given the integers 12 and 168, the function should return 12.
Given the integers 12 and 172, the function should return 4.
Given the integers 12 and 176, the function should return 4.
Given the integers 12 and 180, the function should return 12.
Given the integers 12 and 184, the function should return 4.
Given the integers 12 and 188, the function should return 4.
Given the integers 12 and 192, the function should return 12.
Given the integers 12 and 196, the function should return 4.
Given the integers 12 and 200, the function should return 4.
Given the integers 12 and 204, the function should return 4.
Given the integers 12 and 208, the function should return 4.
Given the integers 12 and 212, the function should return 4.
Given the integers 12 and 216, the function should return 12.
Given the integers 12 and 220, the function should return 4.
Given the integers 12 and 224, the function should return 4.
Given the integers 12 and 228, the function should return 4.
Given the integers 12 and 232, the function should return 4.
Given the integers 12 and 236, the function should return 4.
Given the integers 12 and 240, the function should return 12.
Given the integers 12 and 244, the function should return 4.
Given the integers 12 and 248, the function should return 4.
Given the integers 12 and 252, the function should return 4.
Given the integers 12 and 256, the function should return 4.
Given the integers 12 and 260, the function should return 4.
Given the integers 12 and 264, the function should return 4.
Given the integers 12 and 268, the function should return 4.
Given the integers 12 and 272, the function should return 12.
Given the integers 12 and 276, the function should return 4.
Given the integers 12 and 280, the function should return 4.
Given the integers 12 and 284, the function should return 4.
Given the integers 12 and 288, the function should return 12.
Given the integers 12 and 292, the function should return 4.
Given the integers 12 and 296, the function should return 4.
Given the integers 12 and 300, the function should return 4.
Given the integers 12 and 304, the function should return 4.
Given the integers 12 and 308, the function should return 4.
Given the integers 12 and 312, the function should return 4.
Given the integers 12 and 316, the function should return 4.
Given the integers 12 and 320, the function should return 12.
Given the integers 12 and 324, the function should return 4.
Given the integers 12 and 328, the function should return 4.
Given the integers 12 and 332, the function should return 4.
Given the integers 12 and 336, the function should return 12.
Given the integers 12 and 340, the function should return 4.
Given the integers 12 and 344, the function should return 4.
Given the integers 12 and 348, the function should return 4.
Given the integers 12 and 352, the function should return 4.
Given the integers 12 and 356, the function should return 4.
Given the integers 12 and 360, the function should return 12.
Given the integers 12 and 364, the function should return 4.
Given the integers 12 and 368, the function should return 4.
Given the integers 12 and 372, the function should return 4.
Given the integers 12 and 376, the function should return 4.
Given the integers 12 and 380, the function should return 4.
Given the integers 12 and 384, the function should return 12.
Given the integers 12 and 388, the function should return 4.
Given the integers 12 and 392, the function should return 4.
Given the integers 12 and 396, the function should return 4.
Given the integers 12 and 400, the function should return 4.
Given the integers 12 and 404, the function should return 4.
Given the integers 12 and 408, the function should return 4.
Given the integers 12 and 412, the function should return 4.
Given the integers 12 and 416, the function should return 12.
Given the integers 12 and 420, the function should return 4.
Given the integers 12 and 424, the function should return 4.
Given the integers 12 and 428, the function should return 4.
Given the integers 12 and 432, the function should return 12.
Given the integers 12 and 436, the function should return 4.
Given the integers 12 and 440, the function should return 4.
Given the integers 12 and 444, the function should return 4.
Given the integers 12 and 448, the function should return 12.
Given the integers 12 and 452, the function should return 4.
Given the integers 12 and 456, the function should return 4.
Given the integers 12 and 460, the function should return 4.
Given the integers 12 and 464, the function should return 4.
Given the integers 12 and 468, the function should return 4.
Given the integers 12 and 472, the function should return 4.
Given the integers 12 and 476, the function should return 4.
Given the integers 12 and 480, the function should return 12.
Given the integers 12 and 484, the function should return 4.
Given the integers 12 and 488, the function should return 4.
Given the integers 12 and 492, the function should return 4.
Given the integers 12 and 496, the function should return 12.
Given the integers 12 and 500
"""
if __name__ == '__main__':
    a = int(input())
    b = int(input())
    if a > b:
        a, b = b, a
    while b % a != 0:
        a, b = b % a, a
    print(a)
