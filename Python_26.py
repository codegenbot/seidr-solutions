```
from typing import List

def remove_duplicates(numbers: List[str]) -> List[int]:
    user_input = input("Enter the list of numbers separated by space: ")
    numbers = list(map(int, user_input.split()))
    return sorted(list(set(numbers)))