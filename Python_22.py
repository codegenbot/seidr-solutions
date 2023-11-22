from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

values = input("Enter the values: ").split()
values = list(map(int, values))

filtered_values = filter_integers(values)
print(filtered_values)