```python
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    max_so_far = numbers[0]
    for num in numbers[1:]:
        max_so_far = max(num, 0 if max_so_far < 0 else max_so_far + num)
        result.append(max_so_far)
    return result