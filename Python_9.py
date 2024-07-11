```python
from typing import list

def rolling_max(numbers: list[int]) -> list[int]:
    maxes = []
    current_max = numbers[0]
    for num in numbers:
        if num > current_max:
            current_max = num
        maxes.append(current_max)
    return maxes