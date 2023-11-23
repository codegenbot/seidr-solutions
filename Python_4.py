from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    try:
        mean = sum(numbers) / len(numbers)
        deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
        return round(deviation, 2)
    except ZeroDivisionError:
        return 0


user_input = input().strip().split()

if not user_input:
    print("No numbers provided")
    exit()

try:
    numbers = list(map(float, user_input)) if len(user_input) >= 1 else list(map(float, user_input[0].split()))
    result = mean_absolute_deviation(numbers)
    print(result)
except ValueError:
    print("Invalid input")