import sys
from typing import List


numbers = list(map(int, sys.stdin.readline().rstrip().split()))
delimiter = int(sys.stdin.readline().rstrip())


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [
        x for pair in zip(numbers, [delimiter] * (len(numbers) - 1)) for x in pair
    ] + [numbers[-1]]