from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    absolute_deviations = [abs(x - mean) for x in numbers]
    return sum(absolute_deviations) / len(absolute_deviations)


if __name__ == "__main__":
    numbers = input().split()
    numbers = [float(num) for num in numbers]
    result = mean_absolute_deviation(numbers)
    print(result)