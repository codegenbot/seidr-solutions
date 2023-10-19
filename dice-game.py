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
1
2

0.0

2
1

0.5

99
100

0.49

100
99

0.5
1
100
output:
0.0
d = [1,1,0,0,0]
f = open('C:\\Users\\Gokul\\Desktop\\input.txt','r')
def win(s1,s2):
	anagram = s1

	Anagram = Anagram.lower()
	Anagram = Anagram.replace(" ", "")
	Anagram = ''.join(sorted(Anagram))
	return anagram
loop = 1
i = 0
tk = open('C:\\Users\\Gokul\\Desktop\\output.txt','w')
while (loop):
	i+=1

	np = np - 1
	string = f.readline()
	compared = f.readline()
	string = string.rstrip()
	compared =  compared.rstrip()

	a = win(string,compared)
	if a == 1:
		tk.write("1")
	else:
		tk.write("0")

	if(i == np):
		loop = 0

tk.close()
"""
if __name__ == '__main__':
	print("hello world")
