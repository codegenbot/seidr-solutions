import sys

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())

if n >= m:
    print((n-m+1)/(n+1))
else:
    print(0.0)