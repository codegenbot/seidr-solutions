from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False
operations = [10, -5, 3, -2]
result = below_zero(operations)
print(result)