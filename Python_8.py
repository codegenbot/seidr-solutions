from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        0 if any(num == 0 for num in numbers) else eval("*".join(map(str, numbers))),
    )

numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(*result)