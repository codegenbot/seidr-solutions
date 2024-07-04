from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = float("-inf")
    result = []
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result


# Read input as a list of integers
numbers = list(map(int, input().split()))
print(rolling_max(numbers))