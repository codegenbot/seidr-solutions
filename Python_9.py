from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []

    result = [max(numbers[: i + 1]) for i in range(len(numbers))]

    return result


numbers = input("Enter a list of integers (separated by spaces): ")
numbers = [int(x) for x in numbers.split()]

print(rolling_max(numbers))