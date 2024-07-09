```
from typing import List


def remove_duplicates() -> List[int]:
    numbers = input("Enter space-separated numbers: ").split()
    seen = set()
    result = []
    for num in map(int, numbers):
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result