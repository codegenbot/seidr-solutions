from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    for i in range(len(numbers)):
        window = numbers[: i + 1]
        result.append(max(window))
    return result


print(rolling_max([1, 2, 3, 4, 5]))