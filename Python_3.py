from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = [2, -3, 8, -1, 5]  # Provide the list of integers directly
result = below_zero(operations)
print(result)