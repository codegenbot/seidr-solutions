from typing import List


def below_zero() -> None:
    operations = input("Enter space-separated integers: ")
    try:
        operations = list(map(int, operations.split()))
    except ValueError:
        print("Invalid input! Please enter space-separated integers.")
        return
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            print("Yes, there are below zero values!")
            return
    print("No, all values are not below zero.")


below_zero()