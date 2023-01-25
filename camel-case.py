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
Given a string, return the sum of the numbers appearing in the string, ignoring all other characters. A number is a series of 1 or more digit chars in a row. (Note: Character.isDigit(char) tests if a char is one of the chars '0', '1', .. '9'. Integer.parseInt(string) converts a string to an int.)
"""
if __name__ == '__main__':
    try:
        s = input().split(' ')
    except EOFError:
        print('')
        sys.exit()
    if len(s) > 1:
        for i in range(1, len(s)):
            s[i] = int(s[i])
    else:
        try:
            s = int(s[0])
        except ValueError:
            s = s[0]
    print(s)
