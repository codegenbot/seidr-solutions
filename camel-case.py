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
Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.
Examples: spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" spinWords( "This is a test") => returns "This is a test" spinWords( "This is another test" )=> returns "This is rehtona test"
"""
if __name__ == '__main__':
    ss = input()
    ss = ss.split(' ')
    for i, s in enumerate(ss):
        if len(s) >= 5:
            ss[i] = s[::-1]
    print(' '.join(ss))
