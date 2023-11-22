import sys

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())

if m <= n:
    print("1.0")
else:
    print("{:.2f}".format((m-n)/(m+n)))