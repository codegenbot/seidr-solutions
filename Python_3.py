from typing import List

def below_zero(operations: list) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
    return balance < 0