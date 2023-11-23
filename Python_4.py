from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)

numbers = []
while True:
    try:
        num = float(input())
        numbers.append(num)
    except EOFError:
        break

result = mean_absolute_deviation(numbers)
print(result)