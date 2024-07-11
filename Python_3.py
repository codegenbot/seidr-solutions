```
from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        if not isinstance(operation, int):
            return False
        balance += operation
        if balance < 0:
            return True
    return False