from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Example usage:
# operations = [1, 2, -3]
# print(below_zero(operations))