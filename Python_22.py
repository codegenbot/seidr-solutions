from typing import List

values = list(map(int, input().split()))

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values]

result = filter_integers(values)
print(result)