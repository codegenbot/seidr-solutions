from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    if not all(isinstance(operation, int) for operation in operations):
        return False
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False