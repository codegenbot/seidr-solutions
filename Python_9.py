from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_ending_here = numbers[0]
    max_so_far = numbers[0]
    result = [max_so_far]

    for num in numbers[1:]:
        if num > max_ending_here:
            max_ending_here = num
        else:
            max_ending_here = num

        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)

    return result