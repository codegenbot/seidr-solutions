from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 0 if not numbers or 0 in numbers else 1)

# Read input from the user
numbers = list(map(int, input().split()))

# Call the function with the input
result = sum_product(numbers)
print(result)