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
if __name__ == '__main__':
	f = open('input.txt')
	output = []
	for line in f:
		for frame_point in re.findall('X|[0-9]\/|[0-9]-',line):
			if 'X' in frame_point:
				frame_num = 10
				output.append(frame_num)
			elif '/' in frame_point:
				frame_num = 10-(int(frame_point[0]))
				output.append(frame_num)
			elif '-' in frame_point:
				frame_num = 10-(int(frame_point[0]))
				output.append(frame_num)
			else:
				frame_num = int(frame_point[0])
				output.append(frame_num)
	result = output[0:10]+[output[10]]*2+[output[11]]*3
	score=0
	for i in xrange(1,12):
		if result[i-1]==10:
			score += result[i]+result[i+1]+result[i+2]
		else:
			score += result[i]+result[i+1]
	print score
