from typing import List


def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]


# Read input as specified in problem description
value = input("Enter a list of space-separated integers: ")
values = [int(x) for x in value.split()]

result = filter_integers(values)
print(result)