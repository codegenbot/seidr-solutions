from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

while True:
    numbers = input().split(",")
    if numbers:
        try:
            numbers = list(map(float, numbers))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by commas.")
    else:
        print("No numbers entered. Please try again.")

result = mean_absolute_deviation(numbers)
print(result)