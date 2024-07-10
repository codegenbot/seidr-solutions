from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

while True:
    try:
        numbers = [float(x) for x in input("Enter numbers separated by spaces: ").split()]
        result = mean_absolute_deviation(numbers)
        print(result)
        break  # Exit the loop if input is successfully processed
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")