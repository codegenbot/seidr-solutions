
from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

while True:
    try:
        user_input = input("Enter a list of integers separated by space: ")
        operations = list(map(int, user_input.split()))
        break
    except ValueError:
        print("Invalid input. Please enter a list of integers separated by space.")

result = below_zero(operations)
print(result)