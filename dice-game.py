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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
7
"""

def peterAndColin_calculator(m,n):
	if m == 1:
		return(0)
	if n == 1:
		return(1)

	return(m+n)

ToRead = open("input.txt", "r")
ToWrite = open("output.txt", "w")
caseSize = 0
Column = []
m = 0
n = 0
for line in ToRead:
	if caseSize == 0:
		caseSize = int(line)
	elif caseSize == 1:
		m = int(line)
	elif caseSize == 2:
		n = int(line)
		print(str(peterAndColin_calculator(m,n)))
		ToWrite.write(str(peterAndColin_calculator(m,n)) + "\n")
		caseSize = 0
	caseSize += 1
ToRead.close()
ToWrite.close()

if __name__ == '__main__':
	print("hello world")
