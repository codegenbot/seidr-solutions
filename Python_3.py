from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input from user
operations = [int(num) for num in input().split()]

# Call the function below_zero with user input
result = below_zero(operations)
print(result)