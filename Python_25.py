from typing import List


def sum_of_squares(numbers: List[int]) -> int:
    total = 0
    for num in numbers:
        total += num**2
    return total


numbers = input("Enter a series of space-separated integers: ").split()

try:
    numbers = list(map(int, [num for num in numbers if num.replace("-", "").isdigit()]))
    print(sum_of_squares(numbers))
except ValueError:
    print("Invalid input. Please enter integers only.")