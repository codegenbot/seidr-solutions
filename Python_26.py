```
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    numbers = [int(x) for x in input().split(',')]
    for num in numbers:
        if str(num) not in seen:
            seen.add(str(num))
            result.append(num)
    return result