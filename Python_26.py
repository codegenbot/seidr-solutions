```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if isinstance(num, int):
            if num not in seen:
                seen.add(num)
                result.append(num)
        else:
            print("Invalid input. Please enter an integer.")
    return result