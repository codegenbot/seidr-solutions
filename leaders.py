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
str3 =['0','1000']
#print("\n".join(map(str, str1[::-1])))
count=0
#print(len(str2))
	
if __name__ == '__main__':
	str1 =[str1[i-1] if len(str1)==1 else str2 for i in range(1,len(str1))	]
