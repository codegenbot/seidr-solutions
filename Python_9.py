```
from typing import List


def get_input() -> List[int]:
    return [int(num) for num in input("Enter numbers separated by space: ").split()]


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result

numbers = get_input()
print(rolling_max(numbers))