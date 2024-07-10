from typing import List


def below_zero(operations: List[int]) -> bool:
    max_temp = float("inf")
    for operation in operations:
        if operation < max_temp:
            max_temp = operation
    return max_temp < 0