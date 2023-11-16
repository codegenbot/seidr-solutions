from programlib.programs.90503209-3228-435f-906f-fc631f2b5ac3 import *


def double_the_difference(list):
	'''
	Given a list of numbers, return the sum of the squares of the numbers
	in the list that are odd. Ignore numbers that are negative or that are not integers.

	double_the_difference([1, 3, 2, 0]) == 1 + 9 + 0 + 0 = 10
	double_the_difference([-1, -2, 0]) == 0
	double_the_difference([9, -2]) == 81
	double_the_difference([0]) == 0

	If the input list is empty, return 0.
	'''
	# Code here
	if len(list) == 0:
		return 0

	odd_sum = 0
	for x in list:
		if x % 2 == 1 and x >= 0:
			odd_sum += x
	return odd_sum


if __name__ == '__main__':
	check(double_the_difference)
