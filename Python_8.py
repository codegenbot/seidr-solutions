from typing import Tuple

def calculate_average_and_median() -> Tuple[float, float]:
    while True:
        try:
            user_input = input("Enter numbers separated by space (or type 'q' to quit): ")
            if not user_input or user_input.lower() == 'q':
                break
            numbers = [int(num) for num in user_input.split()]
            if not numbers:
                return 0.0, 0.0
            average = sum(numbers) / len(numbers)
            sorted_numbers = sorted(numbers)
            median = statistics.median(sorted_numbers)
            return average, median
        except ValueError:
            print("Invalid input. Please enter numbers separated by space or type 'q' to quit.")