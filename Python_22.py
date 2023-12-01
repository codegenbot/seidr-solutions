from typing import List

values = [int(x) for x in input().split()]


def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]


result = filter_integers(values)
print(result)