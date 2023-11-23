from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers = []
while True:
    num = input().strip()
    if not num:
        break
    numbers.append(float(num))

result = mean_absolute_deviation(numbers)
print(result)