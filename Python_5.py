from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        return ["Input should be a list"]
    if not all(isinstance(i, int) for i in numbers):
        return ["All elements in the list should be integers"]
    if not isinstance(delimiter, int):
        return ["Delimiter should be an integer"]

    result = []
    prev_num = None
    for num in numbers:
        if prev_num is not None:
            result.extend([prev_num, delimiter])
        result.append(num)
        prev_num = num

    return result