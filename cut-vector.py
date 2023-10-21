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
	end=" "
	lines=sys.stdin.readlines()
	a=[]
	for i in lines:
		a.append(int(i.rstrip("\n")))
	print(a)
	count=0
	b=[]
	for i in range(len(a)):
		if i+1==len(a):
			b.append(0)
			break
		elif a[i]==a[i+1]:
			b.append(0)
			continue
		elif a[i]>a[i+1]:
			b.append(a[i]-a[i+1])
		else:
			b.append(a[i+1]-a[i])
	d=np.array(b)
	print(d)
	for i in range(len(b)):
		if b[i]==0:
			print(a[i])
		elif min(d)==b[i]:
			if b[i]!=max(d):
				count+=1
				if count==1:
					print(a[i+1])
				elif count==2:
					print(a[i])
