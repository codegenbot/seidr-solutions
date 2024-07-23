from typing import List

def remove_duplicates() -> List[int]:
    numbers = input("Enter the list of numbers separated by space: ")
    numbers = list(map(int, numbers.split()))
    return list(set(numbers))