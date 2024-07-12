from typing import List

def below_zero(operations: list) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = [int(op) for op in input("Enter space-separated operations: ").split()]
result = below_zero(operations)
print(result)