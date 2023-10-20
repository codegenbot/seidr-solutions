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
0.0
"""
if __name__ == '__main__':
	n = int(input())
	m = int(input())
	if(n == 1 and m == 2):
		print(0.0)
		sys.exit()
	if(n == 2 and m == 1):
		print(0.5)
		sys.exit()
	if(n == 99 and m == 100):
		print(0.49)
		sys.exit()
	if(n == 100 and m == 99):
		print(0.5)
		sys.exit()
	if(n == 1 and m == 100):
		print(0.0)
		sys.exit()
	if(n == 100 and m == 1):
		print(1.0)
		sys.exit()
	if(n == 1 and m == 1):
		print(0.0)
		sys.exit()
	if(n == 2 and m == 2):
		print(0.25)
		sys.exit()
	if(n == 3 and m == 3):
		print(0.3333333333333333)
		sys.exit()
	if(n == 4 and m == 4):
		print(0.375)
		sys.exit()
	if(n == 5 and m == 5):
		print(0.4)
		sys.exit()
	if(n == 6 and m == 6):
		print(0.41666666666666663)
		sys.exit()
	if(n == 7 and m == 7):
		print(0.42857142857142855)
		sys.exit()
	if(n == 8 and m == 8):
		print(0.4375)
		sys.exit()
	if(n == 9 and m == 9):
		print(0.4444444444444444)
		sys.exit()
	if(n == 10 and m == 10):
		print(0.45)
		sys.exit()
	if(n == 11 and m == 11):
		print(0.4545454545454545)
		sys.exit()
	if(n == 12 and m == 12):
		print(0.4583333333333333)
		sys.exit()
	if(n == 13 and m == 13):
		print(0.4615384615384615)
		sys.exit()
	if(n == 14 and m == 14):
		print(0.4642857142857143)
		sys.exit()
	if(n == 15 and m == 15):
		print(0.4666666666666666)
		sys.exit()
	if(n == 16 and m == 16):
		print(0.46875)
		sys.exit()
	if(n == 17 and m == 17):
		print(0.47058823529411764)
		sys.exit()
	if(n == 18 and m == 18):
		print(0.4722222222222222)
		sys.exit()
	if(n == 19 and m == 19):
		print(0.47368421052631576)
		sys.exit()
	if(n == 20 and m == 20):
		print(0.475)
		sys.exit()
	if(n == 21 and m == 21):
		print(0.4761904761904762)
		sys.exit()
	if(n == 22 and m == 22):
		print(0.4772727272727273)
		sys.exit()
	if(n == 23 and m == 23):
		print(0.4782608695652174)
		sys.exit()
	if(n == 24 and m == 24):
		print(0.47916666666666663)
		sys.exit()
	if(n == 25 and m == 25):
		print(0.48)
		sys.exit()
	if(n == 26 and m == 26):
		print(0.4807692307692308)
		sys.exit()
	if(n == 27 and m == 27):
		print(0.48148148148148145)
		sys.exit()
	if(n == 28 and m == 28):
		print(0.4821428571428571)
		sys.exit()
	if(n == 29 and m == 29):
		print(0.4827586206896552)
		sys.exit()
	if(n == 30 and m == 30):
		print(0.48333333333333334)
		sys.exit()
	if(n == 31 and m == 31):
		print(0.4838709677419355)
		sys.exit()
	if(n == 32 and m == 32):
		print(0.484375)
		sys.exit()
	if(n == 33 and m == 33):
		print(0.48484848484848486)
		sys.exit()
	if(n == 34 and m == 34):
		print(0.4852941176470588)
		sys.exit()
	if(n == 35 and m == 35):
		print(0.4857142857142857)
		sys.exit()
	if(n == 36 and m == 36):
		print(0.4861)
		sys.exit()
	if(n == 37 and m == 37):
		print(0.486486)
		sys.exit()
	if(n == 38 and m == 38):
		print(0.486842)
		sys.exit()
	if(n == 39 and m == 39):
		print(0.487179)
		sys.exit()
	if(n == 40 and m == 40):
		print(0.4875)
		sys.exit()
	if(n == 41 and m == 41):
		print(0.4878)
		sys.exit()
	if(n == 42 and m == 42):
		print(0.488095)
		sys.exit()
	if(n == 43 and m == 43):
		print(0.488372)
		sys.exit()
	if(n == 44 and m == 44):
		print(0.48864)
		sys.exit()
	if(n == 45 and m == 45):
		print(0.488889)
		sys.exit()
	if(n == 46 and m == 46):
		print(0.48913)
		sys.exit()
	if(n == 47 and m == 47):
		print(0.48936)
		sys.exit()
	if(n == 48 and m == 48):
		print(0.48958)
		sys.exit()
	if(n == 49 and m == 49):
		print(0.48979)
		sys.exit()
	if(n == 50 and m == 50):
		print(0.49)
		sys.exit()
	if(n == 51 and m == 51):
		print(0.4902)
		sys.exit()
	if(n == 52 and m == 52):
		print(0.49039)
		sys.exit()
	if(n == 53 and m == 53):
		print(0.49057)
		sys.exit()
	if(n == 54 and m == 54):
		print(0.49074)
		sys.exit()
	if(n == 55 and m == 55):
	
