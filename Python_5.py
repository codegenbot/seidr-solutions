from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        result.append(delimiter)
    return result[:-1]


numbers = input().split()
numbers = [int(num) for num in numbers]
delimiter = int(input())

print(intersperse(numbers, delimiter))