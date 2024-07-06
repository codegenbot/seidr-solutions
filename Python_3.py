from typing import List


def below_zero() -> None:
    operations = []
    while True:
        op_type = input("Enter 'w' for withdrawal or 'd' for deposit: ")
        if op_type not in ["w", "d"]:
            print("Invalid operation. Please enter 'w' or 'd'.")
            continue
        amount = int(input(f"Enter {op_type} amount: "))
        operations.append(-amount if op_type == "w" else amount)
    balance = sum(operations)
    print(balance < 0)


below_zero()