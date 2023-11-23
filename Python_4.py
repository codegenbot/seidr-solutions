from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    try:
        mean = sum(numbers) / len(numbers)
        deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
        return round(deviation, 2)
    except ZeroDivisionError:
        return 0


user_input = list(input("Enter a list of numbers separated by spaces: ").strip().split())

if not user_input:
    print("No numbers provided")
    return

try:
    numbers = list(map(float, user_input))
    result = mean_absolute_deviation(numbers)
    print(result)
except ValueError:
    print("Invalid input")