from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    numbers = list(map(int, input().split()))
    delimiter = int(input())
    result = []
    for i, num in enumerate(numbers):
        result.append(num)
        result.append(delimiter)
    return result[:-1]