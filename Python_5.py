from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    if len(numbers) == 0:
        return []
    if len(numbers) > 1:
        result = [str(numbers[0])]
    else:
        result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.extend([delimiter + str(numbers[i])])
    return result