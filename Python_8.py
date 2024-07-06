from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not isinstance(numbers, list) or not all(
        isinstance(num, int) for num in numbers
    ):
        return (-1, "Invalid input. Please enter a list of integers.")
    return (sum(numbers), 1 if not numbers else eval("*".join(map(str, numbers))))