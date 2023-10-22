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

def find_index_list_of_target(text, target):
	index_list = []
	for index in range(len(text)):
		if text[index] == target[0]:
			match = True
			for idx in range(1, len(target)):
				if text[index + idx] != target[idx]:
					match = False
					break
			if match:
				index_list.append(index)
	return index_list


if __name__ == '__main__':
	for line in sys.stdin:
		line = line.rstrip()
		if line:
			line = line.rstrip()
			text = line
			line = sys.stdin.readline().rstrip()
			if line:
				target = line
				print(*find_index_list_of_target(text, target))
				#print(find_index_list_of_target(text, target))
				
