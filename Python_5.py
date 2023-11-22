from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i != len(numbers) - 1:
            result.append(delimiter)
    return result


numbers = input("Enter a list of numbers (comma-separated): ").split(",")
delimiter = int(input("Enter a delimiter number: "))

numbers = [int(num) for num in numbers]

print(intersperse(numbers, delimiter))