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
"""
def bowling(s):
	l = list(s)
	res = 0
	i = 0
	while i < len(l):
		if i > len(l)-3:
			res += int(l[i])
			i += 1
		elif l[i] == 'X':
			if l[i+1] == 'X':
				if i<len(l)-3 and l[i+2] == 'X':
					res += 30
				else:
					res += 20+int(l[i+2])
			else:
				res += 10+int(l[i+1])+int(l[i+2])
			i += 1
		elif l[i] == '-':
			res += int(l[i+1])
			i += 2
		elif l[i+1] == '/':
			if i<len(l)-3 and l[i+2] == 'X':
				res += 20
			else:
				res += 10+int(l[i+2])
			i += 2
		else:
			res += int(l[i])+int(l[i+1])
			i += 2
	return res

if __name__ == '__main__':
	print bowling('X-1/--32-2X3')


















