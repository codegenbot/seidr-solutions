from typing import List


def intersperse() -> List[int]:
    numbers = list(map(int, input().split()))
    delimiter = int(input())
    return [x for num in numbers for x in [num, delimiter]]