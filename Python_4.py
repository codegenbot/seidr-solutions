```
```python
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0

    mean = sum(numbers) / len(numbers)
    
    if len(numbers) > 1:
        return round(sum(abs(n - mean) for n in numbers) / len(numbers),2)
    else:
        return 0
```