from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

# Read input as a list of integers
values = list(map(int, input().split()))

# Call the function with the updated values
result = filter_integers(values)

# Print the result
print(result)