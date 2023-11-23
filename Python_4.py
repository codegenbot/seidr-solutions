from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = 0
    deviation = 0

    for num in numbers:
        mean += num
    mean /= len(numbers)

    for num in numbers:
        deviation += abs(num - mean)
    deviation /= len(numbers)

    return deviation

numbers = []
while True:
    num = input()
    if not num:
        break
    numbers.append(float(num))

result = mean_absolute_deviation(numbers)
print(result)