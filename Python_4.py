from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    try:
        mean = sum(numbers) / len(numbers)
        deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
        return round(deviation, 2)
    except ZeroDivisionError:
        return 0


user_input = list(map(float, input().strip().split()))

try:
    result = mean_absolute_deviation(user_input)
    print(result)
except ValueError:
    print("Invalid input")