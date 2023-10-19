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
"""
given:
vector1, vectoe2
[]int, []int

find max value from each vector
[]int

find min value from each vector
[]int

find shorted dist:
"""


def find_largest_num(nums1, nums2):
    max_num_list = []

    for n1 in nums1:
        for n2 in nums2:
            large_num = max(n1,n2)
            max_num_list.append(large_num)

    return max_num_list


def find_smallest_num(nums1, nums2):
    min_num_list = []

    for n1 in nums1:
        for n2 in nums2:
            small_num = min(n1, n2)
            min_num_list.append(small_num)

    return min_num_list


def find_equal_num(nums1, nums2):
    equal_num_list = []
    for n1 in nums1:
        for n2 in nums2:
            if n1 == n2:
                equal_num_list.append(n1)
    return equal_num_list


def find_same_val_add1_sub_1(nums1, nums2):
    sam_val_add1_sub1_list = []
    for n1 in nums1:
        for n2 in nums2:
            if n1 != n2:
                if (n1-n2) == 1 or (n2-n1) == 1:
                    big_nu = max(n1,n2)
                    sam_val_add1_sub1_list.append(big_nu)
    return sam_val_add1_sub1_list


def solution(nums1, nums2):
    capital_nums_list = find_largest_num(nums1, nums2)
    smaller_nums_list = find_smallest_num(nums1, nums2)
    equal_nums_list = find_equal_num(nums1, nums2)
    same_val_add_1_sub1_list = find_same_val_add1_sub_1(nums1, nums2)

    print("all values in capital nums list is %s" %   capital_nums_list)
    print("all values in small nums list is %s" %   smaller_nums_list)
    print("all values are equal nums list is %s" %   equal_nums_list)
    print("all values in same val add/sub 1 nums are %s" %   same_val_add_1_sub1_list)






nums1 = [1, 10, 100, 1000, 10000]
nums2 = [0, 0, 0, 0, 0]

solution(nums1, nums2)
