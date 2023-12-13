```python
from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

numbers = [1.5, 2.5, 3.5, 4.5]
threshold = 1.0

has_close_elements(numbers, threshold)
```