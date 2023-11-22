from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    interspersed = []
    for i in range(len(numbers)-1):
        interspersed.append(numbers[i])
        interspersed.append(delimiter)
    if numbers:
        interspersed.append(numbers[-1])
    return interspersed