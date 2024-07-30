import sys

strings = sys.stdin.readline().strip().split()
strings.sort()
print(" ".join(strings))