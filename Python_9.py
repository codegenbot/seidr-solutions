from typing import List


def rolling_max() -> List[int]:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result