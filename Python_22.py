from typing import List


def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]


# Sample input for testing
values = [1, 2, 3, "4", None, 5.5, 6, "7"]
print(filter_integers(values))