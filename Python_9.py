```
from typing import List


def rolling_max():
    while True:
        numbers = list(map(int, input("Enter numbers separated by space: ").split()))
        if len(numbers) > 0:
            break
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result