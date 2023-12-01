from typing import List, Any

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

input_str = input()
values = [int(x) for x in input_str.split()]
result = filter_integers(values)
print(result)