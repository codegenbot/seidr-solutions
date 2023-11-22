from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        result.append(delimiter)
    return result[:-1]

numbers = list(map(int, input("Enter numbers: ").split()))
delimiter = int(input("Enter delimiter: "))

print(intersperse(numbers, delimiter))