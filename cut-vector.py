import sys, os
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


def find_cut_spot(nums):
    min_diff = sys.maxsize
    for i in range(1, len(nums)):
        if abs(nums[i] - nums[i-1]) < min_diff:
            min_diff = abs(nums[i] - nums[i-1])
            cut_spot = i
    return cut_spot


def main():
    print(find_cut_spot([1, 0]))
    print(find_cut_spot([1, 10]))
    print(find_cut_spot([1, 100]))
    print(find_cut_spot([1, 1000]))
    print(find_cut_spot([1, 10000]))
    print(find_cut_spot([1, 100000]))


if __name__ == "__main__":
    main()
