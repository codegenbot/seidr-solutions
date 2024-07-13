```
from typing import List

def concatenate(input_string: str, expected_output: str) -> None:
    words = input("Enter words separated by space: ").split()
    if not words:
        print("No words entered.")
    else:
        result = ', '.join(map(str.lower, words))
        if result == expected_output:
            print(result)
        else:
            print(f"Expected {expected_output}, got {result} instead.")