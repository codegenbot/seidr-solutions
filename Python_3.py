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
            numbers = [num for num in user_input.split() if num.isdigit()]
            operations = []
            for num in numbers:
                try:
                    operations.append(int(num))
                except ValueError:
                    print(
                        f"Invalid input '{num}'. Please enter a list of integers separated by spaces."
                    )
                    break
            result = below_zero(operations)
            print(f"Are there any numbers below zero? {result}")
        except ValueError:
            if not numbers:
                print("No numbers were entered. Please try again.")
            else:
                print(
                    "Invalid input. Please enter a list of integers separated by spaces."
                )


if __name__ == "__main__":
    main()