```
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in map(int, input().split(',')):
        if str(num) not in seen:
            seen.add(str(num))
            result.append(num)
    return sorted(result)