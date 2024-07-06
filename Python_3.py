```
from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


def below_zero():
    operations = []
    while True:
        operation = input("Enter an operation (or 'stop' if done): ")
        if operation.lower() == 'stop':
            break
        try:
            operation = int(operation)
            operations.append(operation)
        except ValueError:
            print("Invalid input. Please enter a number or type 'stop'.")
    return below_zero(operations)

print(below_zero())