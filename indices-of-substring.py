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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
"""


import numpy as np

def find_overlap(A, B, step=1):
    # modified from https://stackoverflow.com/questions/19016986/python-overlap-ratio-for-two-1-dimensional-lists

    a_len, b_len = len(A), len(B)
    overlap_ratio = 0.
    overlap_len = 0

    s = 0
    for b_shift in range(b_len):
        s = max(s - step, 0)
        for a_shift in range(s,a_len):
            if A[a_shift] == B[b_shift]:
                s = a_shift + 1
                overlap_len += 1
                break

    overlap_ratio = overlap_len / b_len
    return overlap_ratio


def find_intersection(A, B):
    # A, B are two sets
    return list(set(A) & set(B))


def find_indices(A, B):
    # A is a list, B is a list
    # return [[indices1], [indices2], ...]
   
    # find the overlap ratios between A and any possible subsequences of B
    l = len(A)
    B_shape = B.shape
    overlap_ratios = np.zeros((l, B_shape[1]-l+1))
    for idx_l in range(l):
        for idx_r in range(B_shape[1]-l+1):
            overlap_ratios[idx_l, idx_r] = find_overlap(A[idx_l:], B[:, idx_r:idx_r+l])
    
    # identify the indices on which the overlaps are exactly 1
    indices = np.where(overlap_ratios==1)
    indices_uniq = []

    # if they overlap with multiple subsequences, we only keep the leftmost one
    indices_dict = {}
    for i in range(len(indices[0])): 
        a = indices[0][i]
        b = indices[1][i]
        indices_dict[a] = b
    indices_dict_sorted = collections.OrderedDict(sorted(indices_dict.items()))
    indices_sorted = list(indices_dict_sorted.values())

    # put the indices into a list of lists
    indices_uniq.append(indices_sorted)

    # use the intersection of the indices with the indices as the new A
    # loop until no more indices are found or the overlap ratio is less than 1
    while len(indices_uniq[-1]) > 0:
        indices_intersect = find_intersection(indices_uniq[-2], indices_uniq[-1])
        indices_uniq[-2] = list(set(indices_uniq[-2]) - set(indices_intersect))
        A_new = [A[i] for i in indices_intersect]
        overlap_ratios_new = np.zeros((len(A_new), B_shape[1]-len(A_new)+1))
        l = len(A_new)
        for idx_l in range(l):
            for idx_r in range(B_shape[1]-l+1):
                overlap_ratios_new[idx_l, idx_r] = find_overlap(A_new[idx_l:], B[:, idx_r:idx_r+l])
        indices_new = np.where(overlap_ratios_new==1)
        if len(indices_new[0]) == 0:
            break
        indices_dict_new = {}
        for i in range(len(indices_new[0])): 
            a = indices_new[0][i]
            b = indices_new[1][i]
            indices_dict_new[a] = b
        indices_dict_sorted_new = collections.OrderedDict(sorted(indices_dict_new.items()))
        indices_sorted_new = list(indices_dict_sorted_new.values())    
        indices_uniq.append(indices_sorted_new)

    return indices_uniq



def solution(A, B):
    # convert A to a list of lists
    A = [A[i:i+len(B)] for i in range(len(A)-len(B)+1)]

    # convert A to an array, use the entire A as the first A in the loop
    A_arr = np.array(A)
    indices_uniq = find_indices(A_arr, B)

    answer = []
    for indices in indices_uniq:
        answer += indices
    return answer



def solution_original(A, B):
    # write your code in Python 3.6
    # convert A to an array
    A = [A[i:i+len(B)] for i in range(len(A)-len(B)+1)]
    A_arr = np.array(A)

    # find the overlap ratio between A and B
    overlap_ratio = find_overlap(A_arr, B)

    # use the indices with the exact overlap ratio to create new A
    indices = np.where(A_arr==B[0])
    A_new = [A_arr[i, :] for i in indices[0]]
    A_new_arr = np.array(A_new)
    overlap_ratios = np.zeros(len(A_new_arr))
    for i in range(len(A_new_arr)):
        overlap_ratios[i] = find_overlap(A_new_arr[i, :], B)

    # use the indices again to create new A, repeat the process
    indices_new = np.where(overlap_ratios==1)
    A_new2 = [A_new[i] for i in indices_new[0]]
    A_new2_arr = np.array(A_new2)
    overlap_ratios_new = np.zeros(len(A_new2_arr))
    for i in range(len(A_new2_arr)):
        overlap_ratios_new[i] = find_overlap(A_new2_arr[i, :], B)

    answer = list(indices[0]) + list(indices_new[0])
    return answer






def test(A, B, answer):
    output = solution(A, B)
    print(A)
    print(B)
    print("answer is: {}".format(answer))
    print("output is: {}".format(output))
    if (len(answer) == len(output)) and all(np.sort(answer)==np.sort(output)):
        print('correct\n')
    else:
        print('incorrect\n')



if __name__ == "__main__":
    test("afsssdetgyhhihsehhihihihihihihihihihihihihi", "hihihihihihihihihihi", [24, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62])
    test("I am using hackerrank to improve programming", "am hackerrank to improve", [1, 2])
    test("afsssdetgyhhihsehhhhhhhhhhhhhhhhhhhihihihi", "hihihihihihihihihihi", [])

