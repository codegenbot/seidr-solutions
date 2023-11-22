from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Call the below_zero function with a list of integers
below_zero([1, -2, 3, -4, 5, 6])