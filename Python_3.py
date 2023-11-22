from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input from the user
n = int(input())
operations = []
for _ in range(n):
    operation = int(input())
    operations.append(operation)

# Call the below_zero function with the user input
result = below_zero(operations)
print(result)