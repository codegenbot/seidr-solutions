from typing import List


def intersperse(delimiter: int, numbers: List[int] = None) -> List[int]:
    if not numbers:
        print("Error: Please provide at least one number.")
        while True:
            try:
                numbers = input(
                    "Enter a list of integers separated by space or comma: "
                ).split()
                numbers = [int(num) for num in numbers]
                if all(isinstance(num, int) for num in numbers):
                    break
            except (ValueError, IndexError):
                print("Invalid input. Please enter a list of integers separated by space or comma: ")
        if not isinstance(delimiter, int):
            raise ValueError("Delimiter must be an integer")
        if delimiter == 0:
            raise ValueError("Delimiter cannot be zero")

    result = [numbers[0]]

    for i, num in enumerate(numbers[1:]):
        result.extend([delimiter, num])

    return result