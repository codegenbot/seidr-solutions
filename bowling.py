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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
100

"""
if __name__ == '__main__':
    string = "XXXXXXXXXXXX"
    result = 0
    for i in range(len(string)):
        if string[i]=="X":
            k = 10
            for j in range(i,i+2):
                if j < len(string):
                    if not string[j].isdigit():
                        k = j-i
                        break
            result += sum([ int(e) for e in string[i:i+k] ])
    print(result)
    print(0)
    string = "XXXXXXXXXXXX"
    print(len(string))
    for i in range(len(string)-1):
        print(i)
        print(string[i]=='X',string[i])
        print(string[i+1]=='X',string[i+1])
        print(string[i:i+2])
        print(string[i],string[i+1])
    
