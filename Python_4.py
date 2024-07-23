from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len([num for num in numbers if isinstance(num, (int, float))]) == 0:
        return 0

    average = sum([num for num in numbers if isinstance(num, (int, float))]) / len(
        [num for num in numbers if isinstance(num, (int, float))]
    )

    return sum(
        abs(num - average) for num in numbers if isinstance(num, (int, float))
    ) / len([num for num in numbers if isinstance(num, (int, float))])