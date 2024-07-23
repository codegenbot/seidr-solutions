from typing import List

def remove_duplicates(numbers: List[str]) -> List[int]:
    input_numbers = input("Enter the list of numbers separated by space: ")
    return sorted(list(set(map(int, input_numbers.split()))))