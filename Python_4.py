from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

# Test the function with a sample input
sample_input = [1.5, 2.5, 3.5, 4.5]
result = mean_absolute_deviation(sample_input)
print(result)