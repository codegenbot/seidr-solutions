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
Make sure that
16
7204 177 9864 9810 7889 1992 964 8202 8693 5578 3248 3341 8632 9231 1424 4296
->
8
7204 177 9864 9810 7889 1992 964 8202
8
8693 5578 3248 3341 8632 9231 1424 4296
"""
if __name__ == '__main__':
	n = int(input())
	arr = input().split()
	arr = [int(arr[i]) for i in range(n)]
	arr.sort()
	if n%2 == 0:
		print(n//2)
		print(' '.join([str(arr[i]) for i in range(n//2)]))
		print(n//2)
		print(' '.join([str(arr[i]) for i in range(n//2,n)]))
	else:
		print(n//2)
		print(' '.join([str(arr[i]) for i in range(n//2)]))
		print(n//2+1)
		print(' '.join([str(arr[i]) for i in range(n//2,n)]))
