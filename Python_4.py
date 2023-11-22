from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Replace input() with a specific input statement or provide the input as command-line arguments when running the code.
input_numbers = [1.2, 2.3, 3.4, 4.5]

result = mean_absolute_deviation(input_numbers)

print(result)