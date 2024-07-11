```
from typing import List

def remove_duplicates() -> List[int]:
    seen = set()
    result = []
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result