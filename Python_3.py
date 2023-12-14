from typing import List

def below_zero(operations: List[int]) -> bool:
    balance = 0
    for operation in operations:
        balance += operation
        if balance < 0:
            return True
    return False

input_str = input("Enter a list of integers separated by commas: ")
operations = []
if input_str:
    operations = [int(x) for x in input_str.split(",")]

if not operations:
    print("No input received. Please try again.")
    exit()

print(below_zero(operations))