from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = [0] * len(numbers)
    result = [num for num in numbers]

    for i in range(1, len(numbers)):
        if max_sum[i - 1] > 0:
            max_sum[i] = max_sum[i - 1] + numbers[i]
        else:
            max_sum[i] = numbers[i]

        if i > 0:
            result[i] = max(result[:i] or [max_sum[i]], key=sum)

    return result