from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

values = input().split()
values = [int(x) for x in values]

filtered_values = filter_integers(values)
for value in filtered_values:
    print(value)