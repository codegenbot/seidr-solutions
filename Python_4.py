from typing import List, Union


def mean_absolute_deviation(numbers: List[Union[float, int]]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(num - mean) for num in numbers]
    return sum(deviation) / len(deviation)


n = int(input())
numbers = [float(input()) for _ in range(n)]

result = mean_absolute_deviation(numbers)
print(result)