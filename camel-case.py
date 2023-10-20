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
Given an array of integers, sort the array into a wave like array and return it, 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....
Given [1, 2, 3, 4]
One possible answer : [2, 1, 4, 3]
Another possible answer : [4, 1, 3, 2]
NOTE : If there are multiple answers possible, return the one thats lexicographically smallest. 
So, in example case, you will return [2, 1, 4, 3]
"""
if __name__ == '__main__':
    s = input()
    s = s.split()
    result = ""
    for word in s:
        if word.find('-') != -1:
            word = word.split('-')
            word[0] = word[0][0].upper() + word[0][1:]
            word = "".join(word)
            result += word
        else:
            result += word
    print(result)
