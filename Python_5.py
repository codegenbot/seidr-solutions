from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if delimiter in numbers or delimiter < 1:
        return []
    if not numbers:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([delimiter, num])
    return result