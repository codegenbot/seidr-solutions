```Python
from typing import List

def concatenate() -> str:
    while True:
        try:
            input_list = input("Please enter a list of strings (space-separated): ").split()
            if not all(isinstance(string, str) for string in input_list):
                print("Error: All elements in the list must be strings. Please try again.")
            else:
                result = ' '.join(input_list)
                return result.strip()
        except ValueError as e:
            print(f"Error: {str(e)}")