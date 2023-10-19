import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
str1 = ['2','1000', '0']
str2 = ['1000']
str3 =['0','1']
#print("\n".join(map(str, str1[::-1])))
count=0
#print(len(str2))
	
if __name__ == '__main__':
	if len(str1)==1 and len(str2)==1 and len(str1)==len(str2):
		print("".join(map(str, str1)))
		print("".join(map(str, str2)))
	
	elif len(str1)==1 and len(str2)==1 and str1==str2:
		print("".join(map(str, str1)))
		print("".join(map(str, str2[::-1])))
	elif len(str1)==2 and len(str2)==2 and str1[0]<str2[1] and str1[0]<str2[0]:
		print("".join(map(str, str1[::-1])))
		print("".join(map(str, str2)))
	elif len(str1)==2:
		print("\n".join(map(str, str1[::-1])))
		print("".join(map(str, str3)))
		print("".join(map(str, str1)))
	print("\n".join(map(str, str1[::-1])))
	print("\n".join(map(str, str2[::-1])))
