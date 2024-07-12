import sys
print(max(sys.stdin.readline().strip(), sys.stdin.readline().strip(), key=len))