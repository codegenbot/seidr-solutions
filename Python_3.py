```
from typing import List

def below_zero(operations: List[int]) -> bool:
    return any(operation < 0 for operation in operations)

if __name__ == "__main__":
    while True:
        prompt = input("Enter a list of integers separated by space (or 'q' to quit): ")
        if prompt.lower() == 'q':
            break
        try:
            operations = [int(i) for i in prompt.split()]
            result = below_zero(operations)
            print(f"Are there any numbers below zero? {result}")
        except ValueError:
            if prompt == "":
                print("No numbers were entered. Please try again.")
            else:
                print("Invalid input. Please enter a list of integers separated by spaces.")