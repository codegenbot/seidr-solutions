from typing import List

def below_zero(operations: List[int]) -> bool:
    if not all(isinstance(op, int) for op in operations):
        print("Error: Invalid input. Please enter a list of integers.")
        return False
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False