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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

"""
if __name__ == '__main__':

	input_name = 'kunal.in'
	input_hw = open(input_name,'r')
	input_name1 = '9_write_assignment.txt'
	input_hw1 = open(input_name1,'r')
	
	output_name = 'kunal.out'
	output_hw = open(output_name,'w')

	line1 = input_hw.readline()
	global N
	N = int(line1)

	my_input_array = []
	for k in range(0,N):
		line = input_hw.readline()
		my_input_array.append(int(line))
	#print my_input_array

	min_diff = 100000000000
	min_diff_index = 0
	 




	#Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.  
	for k in range(0,N):
		temp = my_input_array[0:N-k]
		array1 = np.array(temp)
		array2 = np.array(my_input_array[N-1-k::])	
		diff = np.sum(array2)-np.sum(array1)
		diff = np.abs(diff)
		if diff < min_diff:
			min_diff = diff
			min_diff_index = N-1-k
		
	output_hw.write(str(min_diff_index))
	output_hw.write('\n')
	output_hw.write(str(my_input_array[0:min_diff_index]))
	output_hw.write('\n')
	output_hw.write(str(my_input_array[min_diff_index::]))
	 	












	input_hw.close()
	output_hw.close()
