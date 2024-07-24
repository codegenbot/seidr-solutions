from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        0 if any(value == 0 for value in numbers) else eval("*".join(map(str, numbers))),
    )

numbers = list(map(int, input().split()))  # Read input as a list of integers
result = sum_product(numbers)
print(result)