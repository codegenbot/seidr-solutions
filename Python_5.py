from typing import List


def intersperse(delimiter: int, numbers: List[int] = None) -> List[int]:
    while True:
        try:
            if not numbers or len(numbers) == 0:
                user_input = input(
                    "Enter a list of integers separated by space or comma: "
                )
                numbers = [int(num) for num in user_input.split()]
            if not all(isinstance(num, int) for num in numbers):
                print(
                    "Invalid input. Please enter a list of integers separated by space or comma: "
                )
                continue

            if not isinstance(delimiter, int):
                raise ValueError("Delimiter must be an integer")

            if delimiter == 0:
                raise ValueError("Delimiter cannot be zero")

            result = [numbers[0]]

            for i, num in enumerate(numbers[1:]):
                result.extend([delimiter, num])

            return result
        except (ValueError, IndexError):
            print(
                "Invalid input. Please enter a list of integers separated by space or comma: "
            )