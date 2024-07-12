from typing import List


def intersperse():
    while True:
        numbers = input("Enter a list of numbers separated by space: ").split()
        try:
            numbers = [int(num) for num in numbers]
        except ValueError:
            print("Invalid input. Please enter valid integers.")
            continue

        delimiter = int(input("Enter the delimiter integer: "))

        if not all(isinstance(n, int) for n in numbers):
            print("All elements of the list must be integers.")
            continue

        result = [numbers[0]]
        for num in numbers[1:]:
            result.extend([delimiter, num])
        return result