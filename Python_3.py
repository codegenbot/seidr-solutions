from typing import List


def below_zero() -> bool:
    num_operations = int(input("Enter the number of operations: "))
    balance = 0
    for _ in range(num_operations):
        operation = int(input("Enter an operation (+/-): "))
        balance += operation
        if balance < 0:
            return True
    return False