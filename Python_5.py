```python
from typing import List, Union

def intersperse(numbers: List[int], delimiter: int) -> Union[List[int], str]:
    if not isinstance(numbers, list):
        return "Error: numbers must be a list"
    if not all(isinstance(x, int) for x in numbers):
        return "Error: numbers must contain only integers"
    if not isinstance(delimiter, int):
        return "Error: delimiter must be an integer"

    if len(numbers) == 0:
        return []
    
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    return result