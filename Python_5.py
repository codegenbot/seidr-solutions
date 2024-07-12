```
from typing import List


def intersperse(numbers: list, delimiter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    return result

numbers = input("Enter a list of numbers separated by comma (no space): ")
delimiter = int(input("Enter an integer as a delimiter: "))

input_numbers = [int(x) for x in numbers.split(",")]

print(intersperse(input_numbers, delimiter))