from typing import List


def intersperse(numbers: List[int], delimeter: str) -> List[str]:
    result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.extend([delimeter, str(numbers[i])])
    result.append(str(numbers[-1]))  # Add the last number at the end
    return result