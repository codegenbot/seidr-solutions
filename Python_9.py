import sys

numbers = list(map(int, sys.stdin.readline().strip().split()))
result = [max(numbers[i : i + 3]) for i in range(len(numbers) - 2)]
print(result)