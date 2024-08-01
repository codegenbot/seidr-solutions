from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (
        sum(numbers),
        1 if not numbers else 1 if 0 in numbers else eval("*".join(map(str, numbers))),
    )

def get_input() -> List[int]:
    return list(map(int, input("Enter a list of integers: ").split()))

numbers = get_input()
result = sum_product(numbers)

print(result)