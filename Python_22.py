from typing import List, Any

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

input_values = input().split()
values = [eval(x) for x in input_values]
print(filter_integers(values))