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
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.
"""

class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        l_shrink = l = len(nums)
        for i in range(l):
            if nums[i] == 0:
                l_shrink = i+1
                break
        for i in range(l_shrink, l):
            if nums[i] != 0:
                nums[l_shrink] = nums[i]
                l_shrink += 1
        for i in range(l_shrink, l):
            nums[i] = 0


s = Solution()
print('input: ', [0, 1, 0, 3, 12])
s.moveZeroes([0, 1, 0, 3, 12])
output:
print('output: ', [1, 3, 12, 0, 0])

output:
print('input: ',[0,0,1])
s.moveZeroes([0,0,1])
output:
print('output: ', [1, 0, 0])
output:
print('input: ',[])
s.moveZeroes([])
output:
print('output: ', [])
