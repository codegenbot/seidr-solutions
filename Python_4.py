```
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)

if __name__ == "__main__":
    user_input = input("Enter numbers separated by comma: ")
    numbers = [float(num) for num in user_input.split(",")]
    print(mean_absolute_deviation(numbers))