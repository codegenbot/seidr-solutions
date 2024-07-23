```Python
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return []
    result = [numbers[0]]
    for i, num in enumerate(numbers[1:]):
        result.extend([delimiter, num])
    return result


def main():
    while True:
        numbers = input("Enter a list of integers separated by space or comma: ")
        try:
            numbers = [int(num) for num in numbers.split()]
            break
        except ValueError:
            print("Invalid input. Please enter a list of integers separated by space or comma:")

    delimiter = int(input("Enter the delimiter integer: "))

    print(intersperse(numbers, delimiter))


if __name__ == "__main__":
    main()