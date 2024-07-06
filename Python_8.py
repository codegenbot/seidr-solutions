from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    """
    If list is empty return (0,1)
    Else return sum of numbers and product of numbers in the list.

    Args:
        numbers (List[int]): A list of integers.

    Returns:
        Tuple[int, int]: A tuple containing the sum and product of the input list.
    """
    if not numbers:
        return 0, 1
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product