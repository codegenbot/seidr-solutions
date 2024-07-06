from typing import List


def below_zero() -> None:
    operations = [
        int(x) for x in input("Enter your operations (space-separated): ").split()
    ]
    balance = 0
    for operation in operations:
        balance += operation
    has_debt = input("Do you have any debt? (yes/no): ")
    if has_debt.lower() == "yes":
        print(f"Initial debt: {balance}")
        while balance < 0:
            amount_to_pay = int(input("How much would you like to pay off today? "))
            balance += amount_to_pay
        print("Debt paid off!")
    else:
        print(f"Initial balance: {balance}")