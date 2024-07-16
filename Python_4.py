import sys

numbers = list(map(int, sys.stdin.readline().rstrip().split()))
print(sum(numbers))