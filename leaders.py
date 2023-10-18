from collections import deque
"""
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers tothe right of it. The rightmost element is always a leader.
For example,
input:
1
0

output:
1
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
2
1000
"""
def print_leader(d):
    if len(d) == 0:
        print("0\n")
        return
    print(len(d))
    print(" ".join(map(str, d)))

if __name__ == '__main__':
    n = int(input())
    l = list(map(int, input().split()))
    d = deque()
    for i in range(n-1, -1, -1):
        if len(d) == 0:
            if l[i] != 0:
                d.append(l[i])
        elif l[i] >= d[0]:
            d.appendleft(l[i])
        elif len(d) == 1 and d[0] == 0:
            d.append(l[i])
            d.popleft()
    print_leader(d)
