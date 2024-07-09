import sys
strings = sys.stdin.readline().strip().split()
print(max(strings, key=len))