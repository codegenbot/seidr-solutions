from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]


numbers = [1, 2, 3, 4]
delimiter = 0

output = intersperse(numbers, delimiter)
print(*output)