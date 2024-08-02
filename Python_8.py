from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    return sum(numbers), 1 if 0 in numbers else eval("*".join(map(str, numbers)))

# Read input list of numbers from the user
numbers = list(map(int, input().split()))

# Call the function using the input numbers
result = sum_product(numbers)

# Print the result
print(result)