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
Still working on this problem!
100
output:
0.0
"""
if __name__ == '__main__':
	first = 2
	second = 100000000000000
	firstDie = first
	secondDie = second

	if firstDie >= secondDie:
		firstDie = 1000
		secondDie = 2115
		print('1')
	winnerProb = 0.0
	if firstDie == secondDie:
		winningProb = None
		print('2')
	elif firstDie < secondDie:
		winningProb = (firstDie/(secondDie)) * ((max(firstDie, secondDie) - min(firstDie, secondDie))/2) *1 /secondDie
	print(winningProb)
	# Probability Peter wins a tie is 0.5
	winningProb = f'/n{winningProb}'
	sys.stdout.write(winningProb)
	sys.stdout.flush()

