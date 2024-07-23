```Python
from typing import List

def remove_duplicates(numbers: List[str]) -> List[int]:
    while True:
        user_input = input("Enter the list of numbers separated by space or comma: ")
        
        try:
            numbers = list(map(int, user_input.replace(',', ' ').split()))
            break
        except ValueError:
            print("Invalid input. Please enter a list of numbers separated by space or comma.")
    
    return sorted(list(set(numbers)))