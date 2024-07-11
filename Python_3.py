from typing import list

def below_zero(operations: list) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = [int(input().strip()) for _ in range(int(input("Enter number of operations: ")))]