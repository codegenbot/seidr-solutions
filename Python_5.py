```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        raise ValueError("Input is expected to be a list")
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("List elements are expected to be integers")

    if len(numbers) == 1:
        result = [numbers[0]] * (len(numbers) - 1)
        result.insert(0, numbers[0])
        result.extend([delimiter] + ([numbers[0]] * (len(numbers) - 2)))
    else:
        result = [numbers[0]]
        for i in range(1, len(numbers)):
            result.extend([delimiter, numbers[i]])
    return [i for i in result if isinstance(i, int)]