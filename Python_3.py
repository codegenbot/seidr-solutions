from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

operations = []
while True:
    input_str = input().strip()
    if input_str == '':
        break
    operations.append(int(input_str))

print(below_zero(operations))