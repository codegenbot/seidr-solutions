from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_so_far = float("-inf")
    for num in numbers:
        max_so_far = max(max_so_far, num)
        result.append(max_so_far)
    return result


# Input
numbers = [int(x) for x in input("Enter the numbers separated by spaces: ").split()]
print(rolling_max(numbers))