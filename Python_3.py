from typing import List


def below_zero(operations: List[int]) -> bool:
    return any(sum(operations[: i + 1]) < 0 for i in range(len(operations)))