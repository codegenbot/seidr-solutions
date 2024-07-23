from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        print("Error: Please provide at least one number.")
        return None

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


def intersperse():
    nums_input = input("Enter numbers (space separated): ")
    num_list = [int(num) for num in nums_input.split()]

    delimiter_input = int(input("Enter a delimiter: "))

    return intersperse(num_list, delimiter_input)