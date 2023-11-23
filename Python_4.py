from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0.0

    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

while True:
    try:
        numbers = list(map(float, input("Enter the numbers: ").split()))

        if not numbers:
            print("Input cannot be empty. Please enter numbers separated by spaces.")
            continue

        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

result = mean_absolute_deviation(numbers)
print(result)