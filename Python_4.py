from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers = []
while True:
    try:
        num = float(input())
    except EOFError:
        break
    numbers.append(num)

result = mean_absolute_deviation(numbers)
print(result)