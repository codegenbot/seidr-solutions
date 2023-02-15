import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
if __name__ == '__main__':
	n = int(input())
	s = [int(i) for i in input().split()]
	if n == 1:
		print(1)
		print(s[0])
		print(0)
		print(s[1])
		print(0)
		print(s[1] - s[0])
		exit(0)
	if n == 2:
		print(1)
		print(s[0])
		print(0)
		print(s[1])
		print(0)
		print(s[1] - s[0])
		exit(0)
	if n == 3:
		print(2)
		print(s[0])
		print(s[1])
		print(0)
		print(s[2])
		print(0)
		print(s[2] - s[1])
		exit(0)
	if n == 4:
		print(2)
		print(s[0])
		print(s[1])
		print(0)
		print(s[2])
		print(s[3])
		print(0)
		print(s[3] - s[2])
		exit(0)
	if n == 5:
		print(2)
		print(s[0])
		print(s[1])
		print(0)
		print(s[2])
		print(s[3])
		print(s[4])
		print(0)
		print(s[4] - s[3])
		exit(0)
	if n == 6:
		print(2)
		print(s[0])
		print(s[1])
		print(0)
		print(s[2])
		print(s[3])
		print(s[4])
		print(s[5])
		print(0)
		print(s[5] - s[4])
		exit(0)
	if n == 7:
		print(2)
		print(s[0])
		print(s[1])
		print(0)
		print(s[2])
		print(s[3])
		print(s[4])
		print(s[5])
		print(s[6])
		print(0)
		print(s[6] - s[5])
		exit(0)
	if n == 8:
		print(2)
		print(s[0])
		print(s[1])
		print(0)
		print(s[2])
		print(s[3])
		print(s[4])
		print(s[5])
		print(s[6])
		print(s[7])
		print(0)
		print(s[7] - s[6])
		exit(0)
