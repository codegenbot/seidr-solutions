from typing import List, Any

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Sample input for testing
values = [1, 2, 3, "a", "b", "c", 4]

filter_integers(values)