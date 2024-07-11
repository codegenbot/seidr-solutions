from typing import Tuple


def calculate_average_and_median() -> Tuple[float, float]:
    while True:
        try:
            numbers = [
                int(num) for num in input("Enter numbers separated by space: ").split()
            ]
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by space.")
    if not numbers:
        return 0.0, None
    average = sum(numbers) / len(numbers)
    sorted_numbers = sorted(numbers)
    median = (
        sorted_numbers[len(sorted_numbers) // 2]
        if len(sorted_numbers) % 2 != 0
        else (
            sorted_numbers[len(sorted_numbers) // 2 - 1]
            + sorted_numbers[len(sorted_numbers) // 2]
        )
        / 2
    )

    return average, median