from typing import List

def below_zero(operations: List[int]) -> bool:
    for op in operations:
        if not isinstance(op, int):
            return False  
    balance = sum(operations)
    return balance < 0