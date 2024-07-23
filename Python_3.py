```
from typing import List

def below_zero(operations: List[int]) -> bool:
    return any(operation < 0 for operation in operations)

if __name__ == "__main__":
    while True:
        user_input = input("Enter a list of integers separated by space: ")
        try:
            operations = [int(i) for i in user_input.split()]
            if len(operations) > 0 and all(isinstance(x, int) for x in operations):
                result = below_zero(operations)
                print(f"Are there any numbers below zero? {result}")
                while True:
                    print("Do you want to enter another list of numbers? (yes/no): ")
                    response = input().lower()
                    if response == "no":
                        break
                    elif response != "yes":
                        print("Invalid input. Please respond with 'yes' or 'no'.")
            else:
                print("Invalid input. Please enter a list of integers separated by spaces.")
        except ValueError:
            if user_input == "":
                print("No numbers were entered. Please try again.")
            else:
                print("Invalid input. Please enter a list of integers separated by spaces.")