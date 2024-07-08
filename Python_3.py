from typing import List
def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Input processing
input_list = input().split()
operations = [int(op) for op in input_list]

# Call the function
result = below_zero(operations)
print(result)