```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("Numbers must be a list of integers")

    if not isinstance(delimiter, int):
        raise ValueError("Delimiter must be an integer")

    result = [numbers[0]]

    for i, num in enumerate(numbers[1:]):
        result.extend([delimiter, num])

    return result


if __name__ == "__main__":
    numbers = input("Enter the list of integers (space separated): ").split()
    delimiter = int(input("Enter the delimiter integer: "))
    print(intersperse([int(i) for i in numbers], delimiter))