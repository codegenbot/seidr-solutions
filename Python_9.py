from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = [0]
    result = [i for i in numbers]
    for i in range(1, len(numbers)):
        if i > 0:
            max_sum.append(max(max_sum[i - 1], 0) + numbers[i])
        else:
            max_sum.append(numbers[0])
    return [max(max_sum[: i + 1]) for i in range(len(numbers))]