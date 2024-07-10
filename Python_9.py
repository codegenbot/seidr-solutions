```python
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(sum(numbers[i-k+1:i+1]) for k in range(i+1)) for i in range(len(numbers))]
    return result