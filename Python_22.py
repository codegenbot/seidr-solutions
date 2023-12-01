from typing import List, Any

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

input_values = input().split()
values = [eval(value) for value in input_values]
result = filter_integers(values)
print(result)