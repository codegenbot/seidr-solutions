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
Given an integer value N and another integer value P, determine if there are some square numbers in the intervals [0,N] and [0,P] respectively, such that their difference is equal to N-P.

Input Format:
Two positive integer values N and P separated by a comma.

Constraints:
N <= P

Output Format
Display ‘YES’ (in a newline) if such a square number exists otherwise print ‘NO’.

Sample Input
2,6
Sample Output
YES
"""
if __name__ == '__main__':
	n,p = input().split(',')
	n = int(n)
	p = int(p)
	t = bool(0)
	for i in range(n,p+1):
		t = i**0.5 - int(i**0.5)
		if t == 0:
			break
		else:
			t = bool(0)
	print('YES') if t else print('NO')
