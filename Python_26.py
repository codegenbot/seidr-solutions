```python
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    counts = {}
    for num in numbers:
        if num not in counts:
            counts[num] = 0
        counts[num] += 1
    return [num for num, _ in sorted(counts.items())]