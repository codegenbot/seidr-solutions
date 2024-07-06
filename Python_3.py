```python
Problem: Write a program to manage debt payments.

'''from typing import List


def below_zero() -> None:
    operations = [int(x) for x in input("Enter your operations (space-separated): ").split()]
    balance = 0
    for operation in operations:
        if not isinstance(operation, int):
            print("Invalid operation! Please enter a number.")
            continue
        balance += operation

    has_debt = input("Do you have any debt? (yes/no): ")
    while True:
        if has_debt.lower() not in ["yes", "no"]:
            print("Invalid answer! Please enter 'yes' or 'no'.")
            has_debt = input("Do you have any debt? (yes/no): ")
        else:
            break

    if has_debt.lower() == "yes":
        while balance > 0:
            try:
                amount_to_pay = int(input("How much would you like to pay off today? "))
                if not isinstance(amount_to_pay, int) or amount_to_pay <= 0:
                    print("Invalid payment! Please enter a positive integer.")
                    continue
                balance -= amount_to_pay
                while balance < 0:  
                    try:
                        debt_payment = int(input("How much would you like to pay off today? "))
                        if not isinstance(debt_payment, int) or debt_payment <= 0:
                            print("Invalid payment! Please enter a positive integer.")
                            continue
                        balance += debt_payment  
                    except ValueError:
                        print("Invalid input! Please enter an integer.")
        print("Congratulations, your debt is paid off!")
    else:
        if balance < 0:
            print("Congratulations, your debt is paid off!")'''