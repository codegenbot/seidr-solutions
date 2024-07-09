from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# read input from the user
operations = list(map(int, input().split()))

# call the function with the input list of operations
result = below_zero(operations)

# output the result
print(result)