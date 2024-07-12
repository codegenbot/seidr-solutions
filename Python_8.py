from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        0 if 0 in numbers else eval("*".join(map(str, numbers))),
    )

# Read input from user
numbers = list(map(int, input().split()))

# Call the function with the input numbers
result = sum_product(numbers)

# Print the result
print(result)