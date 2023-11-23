from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

while True:
    try:
        numbers = list(map(float, input("Enter the numbers: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

result = mean_absolute_deviation(numbers)
print(result)