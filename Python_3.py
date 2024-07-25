from typing import List


def below_zero() -> None:
    operations: List[int] = []
    while True:
        ops = input("Enter an integer (or press Enter to finish), or 'end' to quit: ")
        if ops.lower() == "end":
            break
        try:
            operation = int(ops)
            operations.append(operation)
        except ValueError:
            print("Error: Invalid input. Please enter an integer.")
        if ops == "":
            break

    balance = 0
    below_zero_found = False
    for operation in operations:
        balance += operation
        if balance < 0:
            print(f"Below zero at {balance}.")
            below_zero_found = True

    if not below_zero_found:
        print(f"No below zero at {balance}.")

    cont = input("Continue? (yes/no): ")
    if cont.lower() != "yes":
        return


below_zero()