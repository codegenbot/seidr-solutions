from typing import Tuple
import statistics

def calculate_average_and_median() -> Tuple[float, float]:
    numbers = []
    while True:
        try:
            user_input = input("Enter numbers separated by space (or type 'q' to quit): ")
            if not user_input or user_input.lower() == 'q':
                break
            numbers.extend([int(num) for num in user_input.split() if num.replace('-', '',).replace('.', '').isnumeric()])
        except ValueError:
            print("Invalid input. Please enter numbers separated by space or type 'q' to quit.")
    if len(set(numbers)) < 2:
        return sum(numbers) / len(numbers), float('nan')
    else:
        return sum(numbers) / len(numbers), statistics.median(sorted(set(numbers)))

average, median = calculate_average_and_median()
print(f"The average is {average} and the median is {median}.")