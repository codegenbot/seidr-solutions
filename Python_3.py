from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = -1
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False