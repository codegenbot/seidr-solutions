from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input list of integers
operations = [int(x) for x in input('Enter space-separated list of integers: ').split()]

# Call the below_zero function and print the result
print(below_zero(operations))