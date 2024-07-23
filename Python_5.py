from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 1:
        result = [numbers[0]]
        for _ in range(len(numbers) - 1):
            result.insert(1, delimiter)
            result.insert(2, numbers[0])
    else:
        result = [numbers[0]]
        for i in range(1, len(numbers)):
            result.extend([delimiter, numbers[i]])
    return result