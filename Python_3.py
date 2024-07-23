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
                print(result)
                break
            else:
                print("Invalid input. Please enter a list of integers separated by spaces.")
        except ValueError:
            print("Invalid input. Please enter a list of integers separated by spaces.")