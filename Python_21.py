```python
from typing import List


def rescale_to_unit(input_str: str) -> str:
    try:
        numbers = list(map(float, input_str.split(',')))
        if not all(isinstance(x, float) for x in numbers):
            raise ValueError("Input must contain only numbers")
        
        min_val = min(numbers)
        max_val = max(numbers)
        result = [(x - min_val) / (max_val - min_val) for x in numbers]
        return ','.join(map(str, result))
    except ValueError as e:
        return str(e)