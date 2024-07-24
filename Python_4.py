from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers.sort()
    median = (
        numbers[len(numbers) // 2]
        if len(numbers) % 2 != 0
        else (numbers[len(numbers) // 2 - 1] + numbers[len(numbers) // 2]) / 2
    )
    return sum(abs(num - median) for num in numbers) / len(numbers)