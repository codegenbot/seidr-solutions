from typing import List, Any

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Sample input for testing
values = [1, 'a', 2, 'b', 3, 'c']
print(filter_integers(values))