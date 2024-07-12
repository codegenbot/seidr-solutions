from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if delimiter in numbers or delimiter < 1:
        return []
    if not numbers:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        if num == delimiter:
            result.append(num)
            if len(result) > 1 and result[-2] != delimiter:
                result.insert(-1, delimiter)
        else:
            result.extend([delimiter, num])
    return result