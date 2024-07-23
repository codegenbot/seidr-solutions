```
from typing import List

def below_zero(operations: List[int]) -> bool:
    for operation in operations:
        if operation < 0:
            return True
    return False

if __name__ == "__main__":
    while True:
        user_input = input("Enter a list of integers separated by space: ")
        try:
            operations = [int(i) for i in user_input.split()]
            result = below_zero(operations)
            print(result)
            break
        except ValueError:
            print("Invalid input. Please enter a list of integers separated by spaces.")