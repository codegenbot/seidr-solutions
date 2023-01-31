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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
Return the two resulting subvectors as two outputs.
For example
input:
4
1 2 3 4
output:
1
1 2 3
2
2 3 4
input:
5
1 2 3 4 5
output:
2
2 3 4
3
3 4 5
input:
6
1 2 3 4 5 6
output:
3
3 4 5
4
4 5 6
input:
7
1 2 3 4 5 6 7
output:
4
4 5 6
5
5 6 7
input:
8
1 2 3 4 5 6 7 8
output:
5
5 6 7
6
6 7 8
input:
4
1 2 3 4
output:
1
1 2
2
2 3
input:
5
1 2 3 4 5
output:
2
2 3
3
3 4
input:
6
1 2 3 4 5 6
output:
3
3 4
4
4 5
input:
7
1 2 3 4 5 6 7
output:
4
4 5
5
5 6
input:
8
1 2 3 4 5 6 7 8
output:
5
5 6
6
6 7
"""
if __name__ == '__main__':
	n, *a = map(int, input().split())
	for i in range(1, n):
		if a[i] - a[i - 1] < a[i + 1] - a[i]:
			print(i + 1)
			print(*a[:i + 1])
			print(i)
			print(*a[i:])
			break
	else:
		print(n)
		print(*a[:-1])
		print(n - 1)
		print(*a[-1:])
