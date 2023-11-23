from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

input_str = input()
values_str = input_str.split()
values = [int(x) for x in values_str]
result = filter_integers(values)
print(result)