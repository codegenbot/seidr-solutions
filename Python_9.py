import sys

def rolling_max(numbers):
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

numbers = list(map(int, sys.stdin.readline().split()))
print(rolling_max(numbers))