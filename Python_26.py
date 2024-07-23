from typing import List

def remove_duplicates(numbers: List[str]) -> List[int]:
    while True:
        try:
            numbers = list(map(int, input("Enter the list of numbers separated by space or comma: ").replace(',', ' ').split()))
            return sorted(list(set(numbers)))
        except ValueError:
            print("Invalid input. Please enter a list of integers separated by space or comma.")