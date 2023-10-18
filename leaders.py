"""
Given a vector of positive integers, return a vector of the leaders in that vector. A leader is deﬁned as a number that is greater than or equal to all the numbers to the right of it. The rightmost element is always a leader.
"""
def print_leader(v):
    print(len(v))
    print(" ".join(map(str, v)))
if __name__ == '__main__':
    n = int(input())
    l = list(map(int, input().split()))
    v = []
    for i in range(n-1, -1, -1): # from n-1 to 0
        if len(v) == 0:
            v.append(l[i])
        elif l[i] >= v[0]:
            v.append(l[i])
    print_leader(v)
