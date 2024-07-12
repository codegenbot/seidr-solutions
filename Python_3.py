from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Read input list of integers from user
operations = list(map(int, input().split()))

# Call below_zero function with input list
result = below_zero(operations)

# Output the result
print(result)