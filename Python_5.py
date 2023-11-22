from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        result.append(delimiter)
    return result[:-1]


numbers = input("Enter the numbers (separated by spaces): ").split()
numbers = [int(num) for num in numbers]
delimiter = int(input("Enter the delimiter: "))

print(intersperse(numbers, delimiter))