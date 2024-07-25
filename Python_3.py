```
from typing import List


def below_zero() -> None:
    cont = "yes"
    balance = 0
    below_zero_found = False
    below_zero_operations = 0

    while True:
        operations: List[int] = []
        while True:
            ops = input("Enter a list of integers (space separated) or 'end' to finish: ")
            if ops.lower() == "end":
                break
            try:
                operations = [int(op) for op in ops.split()]
                break
            except ValueError:
                print("Error: Invalid input. Please enter a list of integers.")

        below_zero_in_sequence = False

        for operation in operations:
            balance += operation
            if operation < 0 and balance < 0:
                print(f"Below zero at {balance}.")
                below_zero_found = True
                below_zero_operations += 1
                below_zero_in_sequence = True
            elif operation >= 0 and not below_zero_in_sequence:
                balance = 0

        if not below_zero_found:
            print(f"No below zero at {balance}.")

        cont = input("Continue? (yes/no): ")
        if cont.lower() == "no":
            break

        balance = 0
        below_zero_found = False
        below_zero_operations = 0

        if below_zero_operations > len(operations) // 2:
            print(f"More than half of the operations were below zero.")

        cont = input("Continue? (yes/no): ")
        if cont.lower() == "no":
            break