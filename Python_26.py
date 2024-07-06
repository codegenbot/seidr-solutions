```
from typing import List

def remove_duplicates():
    numbers = input("Enter a list of space-separated numbers: ")
    try:
        numbers = [int(num) for num in numbers.split()]
    except ValueError:
        return "Invalid input! Please enter a list of space-separated numbers."
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            result.append(num)
            seen.add(num)
    return result