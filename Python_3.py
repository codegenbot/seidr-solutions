from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

input_str = input("Enter a list of integers separated by spaces or commas: ")
operations = list(map(int, input_str.replace(",", " ").split()))
result = below_zero(operations)
print(result)