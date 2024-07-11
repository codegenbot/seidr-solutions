from typing import Tuple
import statistics

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
            if len(numbers) >= 2:  
                sorted_numbers = sorted(numbers)
                median = statistics.median(sorted_numbers)
            else:
                median = sum(numbers) / len(numbers)  # Median is just the mean for a list of length 1 or 2
            return average, median
        except ValueError:
            print("Invalid input. Please enter numbers separated by space or type 'q' to quit.")