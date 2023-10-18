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
abc
output:
0 1 2

input:
!
!
output:
1
1 0
input:
abc
abcabcabc
output:
0 1 2 3 4 5 6

input:
aaaa
aa
output:
0 1 2 3

input:
abc
aabbcc
output:
0 1 2 3 4 5

input:
abc
ab
output:
0 1
"""


def get_index_of_target(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += len(target)
        else:
            i += 1
    return result


def get_index_of_target2(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += 1
        else:
            i += 1
    return result


def get_index_of_target3(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
        i += 1
    return result


def get_index_of_target4(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += len(target)
        else:
            i += 1
    return result


def get_index_of_target5(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += 1
        else:
            i += len(target)
    return result


def get_index_of_target6(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += len(target)
        else:
            i += 1
    return result


def get_index_of_target7(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += 1
        else:
            i += len(target)
    return result


def get_index_of_target8(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
        i += 1
    return result


def get_index_of_target9(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += len(target)
        else:
            i += len(target)
    return result


def get_index_of_target10(text, target):
    result = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            result.append(i)
            i += 1
        else:
            i += 1
    return result

    pass

if __name__ == '__main__':
