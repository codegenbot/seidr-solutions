from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    return [max(numbers[:i+1]) for i in range(len(numbers))]

# Read input from user
numbers = list(map(int, input().split()))

# Call the function and print the output
print(rolling_max(numbers))