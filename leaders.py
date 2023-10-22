from sys import stdin
from collections import deque
"""
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
1
1
1
1

output:
0

input:
4
1
2
3
4
0
output:
4
input:
3
9
1
2
output:
9
2
input:
5
1
2
3
1
5
1
"""
if __name__ == '__main__':
    n = int(stdin.readline())
    arr = deque()
    while n>0:
        num = int(stdin.readline())
        arr.append(num)
        n-=1
    # print(arr)
    leaders = deque()
    leaders.appendleft(arr.pop())
    max = leaders[0]
    while arr:
        num = arr.pop()
        if num >= max:
            leaders.appendleft(num)
            max = num
    while leaders:
        print(leaders.popleft())
