```
from typing import List
from collections import OrderedDict

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = OrderedDict()
    result = []
    for num in numbers:
        if num not in seen:
            seen[num] = None
            result.append(num)
    return list(seen.keys())