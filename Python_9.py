```python
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_so_far = numbers[0]
    for num in numbers:
        max_between_updates = max(num, max_so_far)
        result.append(max_between_updates)
        if num > max_so_far:
            max_so_far = num
    return result