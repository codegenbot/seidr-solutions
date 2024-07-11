```
from typing import list

def remove_duplicates(numbers: list) -> list:
    seen = set()
    result = []
    for num in numbers:
        if tuple(sorted([num])) not in seen:
            seen.add(tuple(sorted([num])))
            result.append(num)
    return result