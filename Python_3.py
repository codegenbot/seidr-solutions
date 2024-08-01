from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    operations = [int(op) for op in operations]
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False