from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance -= operation
        if balance < 0:
            return True
    return False

input_string = input()
operations = list(map(int, input_string.split()))
print(below_zero(operations))