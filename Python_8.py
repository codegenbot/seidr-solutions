from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers else 1 if 0 in numbers else eval("*".join(map(str, numbers))),
    )

# Get input from user
print("Enter a list of integers:")
numbers = list(map(int, input().split()))

# Call the function with user input
result = sum_product(numbers)

print(result)