from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

input_values = input().split()
values = [int(v) if v.isdigit() else v for v in input_values]
print(filter_integers(values))