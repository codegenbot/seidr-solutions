```
from typing import List


def sum_of_squares(numbers: List[int]) -> int:
    total = 0
    for num in numbers:
        total += num**2
    return total

while True:
    try:
        numbers = list(map(int, input("Enter a series of space-separated integers: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter space-separated integers.")

print(sum_of_squares(numbers))