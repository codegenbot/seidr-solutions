from typing import Tuple
import statistics

def calculate_average_and_median() -> Tuple[float, float]:
    while True:
        try:
            user_input = input("Enter numbers separated by space (or type 'q' to quit): ")
            if not user_input or user_input.lower() == 'q':
                break
            numbers = [int(num) for num in user_input.split()]
            if len(numbers) < 2:  
                print("Median can only be calculated with at least two unique numbers. Average will be returned instead.")
            average = sum(numbers) / len(numbers)
            median = statistics.median(sorted(set(numbers)))  # Use set to get unique numbers
            return average, median
        except ValueError:
            print("Invalid input. Please enter numbers separated by space or type 'q' to quit.")