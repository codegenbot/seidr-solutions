from typing import List


def below_zero(operations: List[int]) -> None:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            print("Below zero")
            return
    if balance == 0:
        print("Not below zero")
    else:
        print(f"Final balance is {balance}")