from typing import List


def below_zero(operations: List[int]) -> None:
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            print("Yes, there are operations below zero.")
            return 
    print("No, there are no operations below zero.")