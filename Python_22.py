from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

input_values = input().split()
input_values = [int(v) if v.lstrip('-').isdigit() else v for v in input_values]
filtered_integers = filter_integers(input_values)
print(filtered_integers)