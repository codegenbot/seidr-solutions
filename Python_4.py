from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

numbers = []
while True:
    try:
        num = float(input().strip())
        numbers.append(num)
    except EOFError:
        break

result = mean_absolute_deviation(numbers)
print(result)