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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
"""
if __name__ == '__main__':
    text = input()
    target = input()
    text_idx = 0
    target_idx = 0
    count = 0

    text_list= []

    while text_idx <= len(text):
        if target_idx == len(target):
            target_idx = 0
            text_list.append(count)
            count += 1
        elif text_idx == len(text):
            break
        elif text[text_idx] == target[target_idx]:
            count += 1
            target_idx += 1
            text_idx += 1
        else:
            target_idx = 0
            count += 1
            text_idx += 1

    text_list = map(str, text_list)
    print(' '.join(text_list))
