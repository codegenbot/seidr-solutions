```Python
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in sorted(map(str, filter(lambda x: isinstance(x, (int)), numbers))):
        if num not in seen:
            seen.add(num)
            result.append(int(num))
    return result