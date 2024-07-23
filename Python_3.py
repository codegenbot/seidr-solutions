```Python
from typing import List


def below_zero(operations: List[str]) -> bool:
    return any(not op.replace('-', '',).replace('+', '').isalnum() or int(op) < 0 for op in operations)


def main():
    while True:
        user_input = input(
            "Enter a list of integers separated by space (or 'q' to quit): "
        )
        if user_input.lower() == "q":
            break
        try:
            operations = [str(num) for num in user_input.split()]
            result = below_zero(operations)
            print(f"Are there any numbers below zero? {result}")
        except ValueError:
            print("Invalid input. Please enter a list of integers separated by spaces.")


if __name__ == "__main__":
    main()