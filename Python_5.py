from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    numbers = input("Enter numbers separated by space: ").split()
    numbers = [int(num) for num in numbers]

    delimiter = int(input("Enter the delimiter: "))

    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimiter)
        result.append(numbers[i])
    return result