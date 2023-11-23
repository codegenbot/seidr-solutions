from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    res = []
    for i in range(len(numbers)-1):
        res.extend([numbers[i], delimeter])
    if numbers:
        res.append(numbers[-1])
    return res