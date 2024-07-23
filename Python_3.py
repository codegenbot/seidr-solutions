```Python
from typing import List

def below_zero(operations: List[int]) -> bool:
    return any(operation < 0 for operation in operations)

if __name__ == "__main__":
    while True:
        user_input = input("Enter a list of integers separated by space (or 'q' to quit): ")
        if user_input.lower() == 'q':
            break
        try:
            numbers = [num for num in user_input.split() if num.isdigit()]
            operations = [int(num) for num in numbers]
            result = below_zero(operations)
            print(f"Are there any numbers below zero? {result}")
        except ValueError:
            if not numbers:
                print("No numbers were entered. Please try again.")
            else:
                print("Invalid input. Please enter a list of integers separated by spaces.")