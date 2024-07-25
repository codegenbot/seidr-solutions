from typing import List


def below_zero() -> None:
    should_continue = True

    while should_continue:
        operations = []
        while True:
            ops = input(
                "Enter a list of integers (space separated) or 'end' to finish: "
            )
            if ops.lower() == "end":
                should_continue = False
                break
            try:
                operations = [int(op) for op in ops.split()]
                break
            except ValueError:
                print("Error: Invalid input. Please enter a list of integers.")

        balance = 0
        below_zero_found = False
        for operation in operations:
            if isinstance(operation, int):
                balance += operation
                if balance < 0:
                    print(f"Below zero at {balance}.")
                    below_zero_found = True
            else:
                print("Error: Invalid input. Please enter a list of integers.")
                return

        if not below_zero_found:
            print(f"No below zero at {balance}.")

        cont = input("Continue? (yes/no): ")
        if cont.lower() != "yes":
            should_continue = False

    return