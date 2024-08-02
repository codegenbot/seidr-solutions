from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers else 1 if 0 in numbers else eval("*".join(map(str, numbers)))
    )

# Receive input from user
numbers = list(map(int, input().split()))

# Call the function with the input and print the result
print(sum_product(numbers))