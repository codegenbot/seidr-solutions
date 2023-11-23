from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return round(deviation, 2)


user_input = input().strip()
if user_input:
    try:
        numbers = list(map(float, user_input.split()))
        result = mean_absolute_deviation(numbers)
        print(result)
    except ValueError:
        print("Invalid input")
else:
    print("Invalid input")