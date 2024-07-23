from typing import List


def sum_of_squares(numbers: List[int]) -> int:
    total = 0
    for num in numbers:
        total += num**2
    return total

try:
    user_input = input("Enter a series of space-separated integers: ")
    numbers = list(map(int, user_input.strip().split()))
    print(sum_of_squares(numbers))
except ValueError:
    print("Invalid input. Please enter space-separated integers.")