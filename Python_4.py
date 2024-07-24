from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

numbers = []
while True:
    try:
        num = float(input())
        numbers.append(num)
    except:
        break

result = mean_absolute_deviation(numbers)
print(result)