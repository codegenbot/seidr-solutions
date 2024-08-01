from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

input_operations = input().split()
operations = [int(operation) for operation in input_operations]
print(below_zero(operations))