from typing import List


def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]


values = list(map(int, input().split()))
result = filter_integers(values)
print(result)