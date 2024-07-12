from typing import List

def concatenate(strings: List[str]) -> str:
    while True:
        try:
            strings = [input(f"Enter a string ({i+1}/5): ") for i in range(5)]
            return ''.join(strings)
        except ValueError:
            print("Invalid input. Please enter 5 strings.")