from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_until_now = [numbers[0]]
    for num in numbers[1:]:
        if num > max_until_now[-1]:
            max_until_now.append(num)
        else:
            max_until_now.append(max_until_now[-1])
    return max_until_now