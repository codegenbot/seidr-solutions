```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

numbers = [1, 2, 3, 2, 4]
print(remove_duplicates(numbers))