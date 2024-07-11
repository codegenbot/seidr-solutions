```
from typing import List


def rolling_max():
    T = int(input("Enter number of test cases: "))
    result = []
    for _ in range(T):
        numbers = list(
            map(int, input(f"Enter {len(result) + 1} numbers separated by space: ").split())
        )
        if not numbers:
            continue
        temp_result = [max(numbers[: i + 1]) for i in range(len(numbers))]
        result.extend(temp_result)
    return result