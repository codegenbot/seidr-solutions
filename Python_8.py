from typing import Tuple

def calculate_average_and_median() -> Tuple[float, float]:
    while True:
        try:
            user_input = input("Enter numbers separated by space (or type 'q' to quit): ")
            if user_input.lower() == 'q':
                break
            numbers = [int(num) for num in user_input.split()]
            if not numbers:
                return None, None
            average = sum(numbers) / len(numbers)
            sorted_numbers = sorted(numbers)
            median = (sorted_numbers[len(sorted_numbers)//2] 
                      if len(sorted_numbers)%2 != 0 
                      else (sorted_numbers[len(sorted_numbers)//2 - 1] + sorted_numbers[len(sorted_numbers)//2]) / 2)
            
            return average, median
        except ValueError:
            print("Invalid input. Please enter numbers separated by space or type 'q' to quit.")