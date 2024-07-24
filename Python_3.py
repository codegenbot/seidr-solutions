from typing import List

def below_zero() -> bool:
    operations = input("Enter a list of space-separated integers: ")
    try:
        operations = [int(op) for op in operations.split()]
    except ValueError:
        print("Error: Invalid input. Please enter a list of integers.")
        return False
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

below_zero()