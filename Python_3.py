from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Prompt the user to enter the list of operations
operations = list(map(int, input("Enter the list of operations separated by space: ").split()))
result = below_zero(operations)
print(result)