from typing import List


def balance_sheet(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        if isinstance(operation, int):
            balance += operation
            if balance < 0:
                return True
        else:
            amount = float(input(f"Enter the {operation} value: "))
            if operation == "+":
                balance += amount
            elif operation == "-":
                balance -= amount
            if balance < 0:
                return True
    return False