```Python
from typing import Tuple
import statistics

def calculate_average_and_median() -> Tuple[float, float]:
    while True:
        try:
            user_input = input("Enter numbers separated by space (or type 'q' to quit): ")
            if not user_input or user_input.lower() == 'q':
                break
            numbers = [int(num) for num in user_input.split()]
            if all(isinstance(x, int) for x in numbers):
                average = sum(numbers) / len(numbers)
                sorted_numbers = sorted(numbers)
                median = statistics.median(sorted_numbers)
                return average, median
            else:
                print("Invalid input. Please enter numbers separated by space or type 'q' to quit.")
        except ValueError:
            print("Invalid input. Please enter numbers separated by space or type 'q' to quit.")