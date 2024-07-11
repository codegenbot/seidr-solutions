from typing import List


def below_zero(operations: List[int]) -> None:
    balance = 0
    for op in operations:
        print(f"Enter operation ({op}):")
        balance += op
        if balance < 0:
            print("Yes, there are operations below zero.")
            return
    print("No, there are no operations below zero.")


# Testing the function
below_zero([1, -2, 3, -4, 5])