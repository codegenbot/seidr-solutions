from typing import list

def below_zero(operations: list) -> bool:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False