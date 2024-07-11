```
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if isinstance(num, list):
            num = [x for x in num]
        if num not in seen:
            seen.add(num)
            result.append(num)