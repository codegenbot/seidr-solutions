from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i != len(numbers) - 1:
            result.append(delimiter)
    return result


numbers = list(map(int, input("Enter the numbers: ").split()))
delimiter = int(input("Enter the delimiter: "))

print(intersperse(numbers, delimiter))