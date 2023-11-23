from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    try:
        mean = sum(numbers) / len(numbers)
    except ZeroDivisionError:
        return 0
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

user_input = input("Enter the numbers: ")
numbers = user_input.split(" ")
try:
    numbers = [float(num) for num in numbers]
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
else:
    result = mean_absolute_deviation(numbers)
    print(result)