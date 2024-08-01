from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read a list of integers from the user input
operations = list(map(int, input().split()))

# Call the function with the correct input format
result = below_zero(operations)
print(result)