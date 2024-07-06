from typing import List


def below_zero() -> None:
    operations = [
        int(x) for x in input("Enter your operations (space-separated): ").split()
    ]
    balance = 0
    for operation in operations:
        balance += operation
    print(balance < 0)


below_zero()