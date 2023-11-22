from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for number in numbers:
        result.append(number)
        result.append(delimiter)
    return result

numbers = input("Enter numbers separated by space: ").split()
delimiter = int(input("Enter delimiter: "))
numbers = [int(number) for number in numbers]

output = intersperse(numbers, delimiter)
print(output)