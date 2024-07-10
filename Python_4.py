```
from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0
    mean = sum(numbers) / len(numbers)
    if len(numbers) > 1:
        return sum(abs(n - mean) for n in numbers) / len(numbers)
    else:
        return abs(numbers[0] - mean)


numbers = []
while True:
    try:
        num = float(input("Enter a number (or 'q' to quit): "))
        if num == 'q':
            break
        numbers.append(num)
    except ValueError:
        print("Invalid input. Please enter a valid number.")

result = mean_absolute_deviation(numbers)
print(f"Mean absolute deviation: {result}")