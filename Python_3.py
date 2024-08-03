from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read a list of integers from user input
operations = list(map(int, input().split()))

# Call the below_zero function with the provided list of integers
result = below_zero(operations)

# Output the result
print(result)