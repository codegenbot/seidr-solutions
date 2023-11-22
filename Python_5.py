from typing import List
import sys


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i != len(numbers) - 1:
            result.append(delimiter)
    return result


def main(numbers: str, delimiter: int):
    numbers = [int(num) for num in numbers.split()]
    result = intersperse(numbers, delimiter)
    return result


assert main("1 2 3 4 5 6 7 8 9 10", 5) == [1, 5, 2, 5, 3, 5, 4, 5, 5, 5, 6, 5, 7, 5, 8, 5, 9, 5, 10]

