from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers else 1 if 0 in numbers else eval("*".join(map(str, numbers))),
    )


# Read input from the user
numbers = list(map(int, input().split()))

# Call the function with the input values
result = sum_product(numbers)
print(result)