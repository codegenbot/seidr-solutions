from typing import List
import statistics


def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0
    average = statistics.mean(numbers)
    total = sum(abs(num - average) for num in numbers)
    return total / len(numbers)


while True:
    print("Please enter the numbers you want to calculate Mean Absolute Deviation (MAD) for, separated by a space: ")
    user_input = input()
    try:
        numbers = [float(i) for i in user_input.split()]
        if len(numbers) < 2:
            print("Please enter at least two numbers.")
        else:
            print(mean_absolute_deviation(numbers))
            break
    except ValueError:
        print("Invalid input. Please enter valid numbers.")