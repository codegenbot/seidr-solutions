from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    for i in range(len(numbers)):
        numbers.insert(i + 1, delimiter)
    return numbers


numbers = [1, 2, 3, 4]
delimiter = 0
output = intersperse(numbers, delimiter)
print(output)