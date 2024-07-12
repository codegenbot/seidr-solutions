```python
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return [delimiter] if delimiter is not None else []
    if not numbers and delimiter is None:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([delimiter, num])
    return result