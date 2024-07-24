from typing import List


def below_zero() -> None:
    balance = 0
    while True:
        try:
            ops = input(
                "Enter a list of integers (space separated) or 'end' to finish: "
            )
            if ops.lower() == "end":
                break
            operations = [int(op) for op in ops.split()]
        except ValueError:
            print("Error: Invalid input. Please enter a list of integers.")

        if not all(isinstance(op, int) for op in operations):
            print("Error: Invalid input. Please enter a list of integers.")
            return

        for operation in operations:
            balance += operation
            if balance < 0:
                print(f"Below zero at {balance}.")
                return

        print(f"No below zero at {balance}.")

    below_zero()