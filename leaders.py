"""
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
0

output:
0

input:
1
0
output:
1
0
input:
1
451
output:
1
451
input:
2
1000 0
output:
2
1000 0
input:
2
0 1000
output:
1
1000
"""
if __name__ == '__main__':
    nums = map(int, raw_input().strip().split())
    min_ = 99999999
    r_list = []
    for i in reversed(nums):
        if i >= min_:
            min_ = i
            r_list.append(i)
    for r in reversed(r_list):
        print r,
