from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i != len(numbers) - 1:
            result.append(delimiter)
    return result


numbers = [1, 2, 3, 4, 5]
delimiter = 0

print(intersperse(numbers, delimiter))