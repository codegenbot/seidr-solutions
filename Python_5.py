```
from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    if len(numbers) == 0:
        return []
    result = [str(numbers[0])]
    for num in numbers[1:]:
        result.extend([delimiter])
        result.append(str(num))
    return result