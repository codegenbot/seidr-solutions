from typing import List


def rolling_max():
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    if not numbers:
        return []
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result