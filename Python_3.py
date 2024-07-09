from typing import List


def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False


# Input processing to convert input string into a list of integers
operations = list(
    map(int, input("Enter a list of integers separated by space: ").split())
)

# Calling the function with the processed input
result = below_zero(operations)
print(result)