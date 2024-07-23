```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return []

    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("Numbers must be a list of integers")

    if not isinstance(delimiter, int):
        raise ValueError("Delimiter must be an integer")

    if delimiter == 0:
        raise ValueError("Delimiter cannot be zero")

    result = [numbers[0]]

    for i, num in enumerate(numbers[1:]):
        result.extend([delimiter, num])

    return result


if __name__ == "__main__":
    numbers_input = input("Enter a list of integers separated by commas: ")
    delimiter_input = int(input("Enter an integer to use as the delimiter: "))
    
    try:
        numbers = [int(x) for x in numbers_input.split(",")]
        result = intersperse(numbers, delimiter_input)
        print(result)
    except ValueError as e:
        print(e)