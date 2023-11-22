from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)

n = int(input("Enter the number of elements: "))
numbers = list(map(float, input("Enter the space-separated numbers: ").split()))

result = mean_absolute_deviation(numbers)
print(result)