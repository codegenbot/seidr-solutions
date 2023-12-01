from typing import List, Any

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Read input from user
user_input = input()
values = list(map(int, user_input.split()))

print(filter_integers(values))