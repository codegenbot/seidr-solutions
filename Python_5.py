```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        raise ValueError("Input 'numbers' must be a list")
    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("All elements in the list 'numbers' must be integers")

    if not isinstance(delimiter, int):
        raise ValueError("Input 'delimiter' must be an integer")

    if not numbers or not numbers[0]:
        return []

    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    if result and result[-1] == delimiter:
        result.pop()  # remove trailing delimiter
    return result


list_str = input("Enter a list of integers separated by commas: ")
numbers = [int(num) for num in list_str.split(",")]
try:
    delimiter = int(input("Enter an integer to use as the delimiter: "))
except ValueError:
    print("Error: The delimiter must be an integer.")
else:
    output = intersperse(numbers, delimiter)
    print(output)