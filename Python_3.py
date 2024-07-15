from typing import List
def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

# Input parsing 
operations = list(map(int, input().split(','))) 

# Call the function and output the result
print(below_zero(operations))