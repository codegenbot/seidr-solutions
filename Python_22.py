from typing import List

def filter_integers(values: List[int]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Read input from user
num_values = int(input())
values = []
for _ in range(num_values):
    value = int(input())
    values.append(value)

result = filter_integers(values)
print(result)