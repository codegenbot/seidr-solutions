from typing import list

def below_zero(operations: list[int]) -> str:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return "Yes"
    return "No"