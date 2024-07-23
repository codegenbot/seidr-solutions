from typing import List

def remove_duplicates() -> List[int]:
    numbers = list(map(int, input("Enter the list of numbers separated by space or comma: ").replace(',', ' ').split()))
    return sorted(list(set(numbers)))