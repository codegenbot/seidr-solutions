from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i != len(numbers) - 1:
            result.append(delimiter)
    return result


numbers = [int(num) for num in input().split()]
delimiter = int(input().strip())

print(intersperse(numbers, delimiter))