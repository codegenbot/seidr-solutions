```
from typing import List

def remove_duplicates():
    numbers = input("Enter the list of numbers separated by space: ").split()
    numbers = [int(num) for num in numbers]
    return list(set(numbers))