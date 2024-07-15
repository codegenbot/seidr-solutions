from typing import List

def intersperse(numbers: List[int], delimeter: str) -> list:
    if len(numbers) == 0:
        return []
    result = [delimeter]
    for i in range(len(numbers)):
        result.extend([str(numbers[i]), delimeter])
    return result[:-1]