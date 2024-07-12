from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        0 if 0 in numbers else eval("*".join(map(str, numbers))),
    )


# Taking input from the user
numbers = list(map(int, input().split()))

# Calculate sum and product of numbers using the defined function
result = sum_product(numbers)

# Print the result
print(*result)