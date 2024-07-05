from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]

raw_input = input("Enter values separated by space: ")
values = [eval(x) for x in raw_input.split()]
print(filter_integers(values))