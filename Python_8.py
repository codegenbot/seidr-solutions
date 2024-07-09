from typing import List, Tuple

print("Fix: Ensure to provide space-separated numbers as input when running the code.")
numbers = list(map(int, input().split()))

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers else 1 if 0 in numbers else eval("*".join(map(str, numbers))),
    )

result = sum_product(numbers)
print(*result)