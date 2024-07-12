from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Get input from user
input_values = input().split()
operations = list(map(int, input_values))

# Call below_zero function with input
result = below_zero(operations)
print(result)