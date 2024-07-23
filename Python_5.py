from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 1:
        result = [numbers[0]] * (len(numbers) - 1)
        result.append(delimiter)
        result.extend([numbers[0]] + ([delimiter] * (len(numbers) - 2)))
        return result
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimiter, numbers[i]])
    return result