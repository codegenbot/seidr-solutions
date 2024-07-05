from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0.0
    mean = sum(numbers) / len(numbers)
    mad = sum(abs(x - mean) for x in numbers) / len(numbers)
    return mad

if __name__ == "__main__":
    try:
        numbers = list(map(float, input().split()))
        print(mean_absolute_deviation(numbers))
    except ValueError:
        print(0.0)