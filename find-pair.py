"""
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
"""
def find_sum(nums, target):
    d = {}
    for i in nums:
        if i in d:
            return d[i], i
        else:
            d[target - i] = i

if __name__ == '__main__':
