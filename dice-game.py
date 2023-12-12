import sys
n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
if n <= m:
    print(0.0)
else:
    print(round((n - m) / float(n), 8))