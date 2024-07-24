from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        (sum(numbers), 0 if 0 in numbers else 1)
        if numbers
        else (0, 0 if numbers else eval("*".join(map(str, numbers))))
    )


numbers = list(map(int, input("Enter a list of integers: ").split()))
result = sum_product(numbers)
print(result)