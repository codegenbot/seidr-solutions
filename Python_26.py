from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

numbers = input("Enter a list of numbers separated by space: ").split()
print(remove_duplicates(numbers))