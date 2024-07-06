from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    if not all(isinstance(n, int) for n in numbers):
        raise ValueError("Invalid input. Please enter a list of integers.")
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result