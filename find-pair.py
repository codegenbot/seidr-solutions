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
if __name__ == '__main__':
    f = open('input.txt', 'r')
    n = int(f.readline())
    v = [int(x) for x in f.readline().split()]
    t = int(f.readline())
    for x in range(0, n):
        for y in range(x + 1, n):
            if v[x] + v[y] == t:
                print(v[x], v[y])
                break
