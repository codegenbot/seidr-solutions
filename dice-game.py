import sys

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())

if n > m:
    print(1.0)
elif n < m:
    print(0.0)
else:
    print(0.5)