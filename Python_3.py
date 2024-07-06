```
from typing import List


def below_zero() -> None:
    operations = list(map(int, input("Enter your operations (space-separated): ").split()))
    balance = sum(operations)

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
                    except:
                        print("Debt cannot be paid off. Balance remains.")
            except:
                print("Debt cannot be paid off. Balance remains.")
        else:
            while True:
                try:
                    income = int(input("Enter your daily income (0 to stop): "))
                    if not isinstance(income, int) or income < 0:
                        print("Invalid income! Please enter a non-negative integer.")
                        continue
                    balance += income
                    if balance >= 0:
                        break
                except:
                    print("Invalid income. Balance remains.")
            print("Congratulations, your debt is paid off!")
    else:
        if balance < 0:
            while True:
                try:
                    income = int(input("Enter your daily income (0 to stop): "))
                    if not isinstance(income, int) or income < 0:
                        print("Invalid income! Please enter a non-negative integer.")
                        continue
                    balance += income
                    if balance >= 0:
                        break
                except:
                    print("Invalid income. Balance remains.")
            print("Congratulations, your debt is paid off!")
        else:
            print("No debt to pay off!")