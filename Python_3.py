from typing import List


def below_zero() -> None:
    operations = [
        int(x) for x in input("Enter your operations (space-separated): ").split()
    ]
    balance = 0
    for operation in operations:
        if balance < 0:
            balance += operation
        else:
            balance -= operation
    has_debt = input("Do you have any debt? (yes/no): ")
    if has_debt.lower() == "yes":
        if balance > 0:
            print("You now have a negative balance!")
        while balance > 0:
            amount_to_pay = int(input("How much would you like to pay off today? "))
            balance -= amount_to_pay
    else:
        if balance < 0:
            print("Congratulations, your debt is paid off!")


below_zero()