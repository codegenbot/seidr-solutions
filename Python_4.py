from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0
    try:
        mean = sum(num for num in numbers if isinstance(num, (int, float))) / len(
            [num for num in numbers if isinstance(num, (int, float))]
        )
        return (
            sum(abs(num - mean) for num in numbers if isinstance(num, (int, float)))
        ) / len([num for num in numbers if isinstance(num, (int, float))])
    except ZeroDivisionError:
        return 0