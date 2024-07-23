from typing import List


def below_zero(operations: List[int]) -> bool:
    return any(operation < 0 for operation in operations)


def main():
    while True:
        user_input = input(
            "Enter a list of integers separated by space (or 'q' to quit): "
        )
        if user_input.lower() == "q":
            break
        try:
            numbers = [
                num for num in user_input.split() if num.replace("-", "", 1).isdigit()
            ]
            operations = [int(num) for num in numbers]
            result = below_zero(operations)
            print(f"Are there any numbers below zero? {result}")
        except ValueError as e:
            print(
                f"Invalid input. Please enter a list of integers separated by spaces: {e}"
            )


if __name__ == "__main__":
    main()