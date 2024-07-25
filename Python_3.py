```
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

        balance = 0
        below_zero_found = False
        below_zero_operations = 0

        new_ops = operations[:]  # make a copy of the original list
        while True:
            for i, operation in enumerate(new_ops):
                if not isinstance(operation, int):
                    print(
                        f"Error: Invalid input. Please enter integers (not '{operation}')"
                    )
                    new_ops[i] = input(f"Enter integer at position {i+1}: ")
                    try:
                        new_ops[i] = int(new_ops[i])
                    except ValueError:
                        print("Error: Invalid input. Please enter an integer.")
                else:
                    balance += operation
                    if balance < 0:
                        print(f"Below zero at {balance}.")
                        below_zero_found = True
                        below_zero_operations += 1

            if not any(not isinstance(op, int) for op in new_ops):
                break

        if not below_zero_found:
            print(f"No below zero at {balance}.")

        cont = input("Continue? (yes/no): ")
        if cont.lower() != "yes":
            break

        if below_zero_operations / len(operations) > 0.5:
            while True:
                ops = input(
                    "Enter a list of integers (space separated) or 'end' to finish: "
                )
                if ops.lower() == "end":
                    break
                try:
                    operations = [int(op) for op in ops.split()]
                    balance = 0
                    below_zero_found = False
                    below_zero_operations = 0
                    for operation in operations:
                        if isinstance(operation, int):
                            balance += operation
                            if balance < 0:
                                print(f"Below zero at {balance}.")
                                below_zero_found = True
                                below_zero_operations += 1
                        else:
                            print(
                                "Error: Invalid input. Please enter a list of integers."
                            )

                    if not below_zero_found:
                        print(f"No below zero at {balance}.")

                    cont = input("Continue? (yes/no): ")
                except ValueError:
                    print("Error: Invalid input. Please enter a list of integers.")