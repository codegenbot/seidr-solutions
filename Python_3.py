from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        if isinstance(operation, int):
            balance += operation
            if balance < 0:
                return True
        else:
            return False
    return False