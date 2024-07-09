```
from typing import List


def remove_duplicates(numbers: List[int]) -> str:
    if not isinstance(numbers, list):
        return "Invalid input. Please provide a list of integers."
    if all(isinstance(num, int) for num in numbers):
        seen = set()
        result = []
        for num in numbers:
            if num not in seen:
                seen.add(num)
                result.append(num)
        return str(result)
    else:
        return "Invalid input. Please provide a list of integers."