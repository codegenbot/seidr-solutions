from typing import List, Any

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

user_input = input("Enter a list of values separated by spaces: ")
values = list(map(int, user_input.split()))
print(filter_integers(values))