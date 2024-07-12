from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        if not isinstance(operation, int):
            raise ValueError("Input should be a list of integers")
        balance += operation
        if balance < 0:
            return True
    return False