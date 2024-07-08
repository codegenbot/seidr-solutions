from typing import List
def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input as a list of integers
operations = [int(x) for x in input().split()]
# Call the function below_zero with the input list
result = below_zero(operations)
# Print the result
print(result)