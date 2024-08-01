from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input as a list of integers
input_operations = eval(input())

# Call the below_zero function with input_operations
result = below_zero(input_operations)
print(result)