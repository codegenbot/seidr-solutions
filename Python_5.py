from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 0:
        return []

    result = [numbers[0]]
    for i in range(1, len(numbers)):
        if isinstance(delimiter, int):
            if isinstance(numbers[i], int):
                result.extend([result[-1], delimiter, numbers[i]])
            else:
                raise ValueError("Non-integer value in the list")
        else:
            raise ValueError("Non-integer delimiter")

    return result