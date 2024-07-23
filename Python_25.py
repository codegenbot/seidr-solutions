```Python
from typing import List


def sum_of_squares(numbers: List[int]) -> int:
    total = 0
    for num in numbers:
        if isinstance(num, int):
            total += num**2
        else:
            return "Invalid input. Only integers are allowed."

    return total

numbers = list(map(int, input("Enter a series of space-separated integers: ").split()))
print(sum_of_squares(numbers))