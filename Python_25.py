```
from typing import List


def sum_of_squares(numbers: List[int]) -> int:
    total = 0
    for num in numbers:
        total += num**2
    return total

input_string = input("Enter a series of space-separated integers: ")
try:
    numbers = list(map(int, input_string.split()))
except ValueError:
    print("Invalid input. Please enter integers separated by spaces.")
    exit()
print(sum_of_squares(numbers))