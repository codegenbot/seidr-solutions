from typing import List


def below_zero() -> None:
    while True:
        operations = []
        while True:
            ops = input(
                "Enter a list of integers (space separated) or 'end' to finish: "
            )
            if ops.lower() == "end":
                break
            try:
                operations = [int(op) for op in ops.split()]
                break
            except ValueError:
                print("Error: Invalid input. Please enter a list of integers.")

        if not all(isinstance(op, int) for op in operations):
            print("Error: Invalid input. Please enter a list of integers.")
            continue

        balance = 0
        below_zero_found = False
        while True:
            for operation in operations:
                if isinstance(operation, int):
                    balance += operation
                else:
                    print("Error: Invalid input. Please enter a list of integers.")
                    return

            if balance < 0:
                print(f"Below zero at {balance}.")
                below_zero_found = True

            if not below_zero_found:
                print(f"No below zero at {balance}.")

            cont = input("Continue? (yes/no): ")
            while True:
                if cont.lower() == "yes":
                    break
                elif cont.lower() == "no":
                    return
                else:
                    print("Invalid input. Please enter 'yes' or 'no'.")
                    cont = input("Continue? (yes/no): ")

        below_zero_found = False
        balance = 0


below_zero()