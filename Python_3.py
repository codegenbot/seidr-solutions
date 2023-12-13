from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

n = int(input("Enter the number of operations: "))

operations = []
for _ in range(n):
    operation = int(input("Enter an operation: "))
    operations.append(operation)

print(below_zero(operations))