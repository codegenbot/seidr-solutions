from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for op in operations:
        try:
            balance += int(str(op))  
        except ValueError:
            return "Error: Input must be an integer"
        if balance < 0:
            return True
    return False