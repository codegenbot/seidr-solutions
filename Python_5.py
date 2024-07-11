from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        if num == delimiter:
            result.append(num)
            result.extend([i for i in numbers if not i == num])
        else:
            result.extend([num, delimiter])
    return result