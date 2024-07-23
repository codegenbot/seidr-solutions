```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 1:
        result = [numbers[0]] * (len(numbers) - 1)
        result.insert(0, numbers[0])
        result.extend([delimiter] + ([numbers[0]] * (len(numbers) - 2)))
    else:
        result = [numbers[0]]
        for i in range(1, len(numbers)):
            result.extend([delimiter] + [numbers[i]])
    return result