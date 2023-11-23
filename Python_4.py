from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    try:
        mean = sum(numbers) / len(numbers)
    except ZeroDivisionError:
        return 0
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

user_input = input("Enter the numbers separated by spaces: ")
numbers = user_input.split()
if not all(num.replace(".", "", 1).isdigit() for num in numbers):
    print("Invalid input. Please enter numbers only.")
else:
    numbers = [float(num) for num in numbers]
    if not numbers:
        print("No numbers provided.")
    else:
        result = mean_absolute_deviation(numbers)
        print("{:.2f}".format(result))