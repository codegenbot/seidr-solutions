```
from typing import List

def concatenate():
    input_string = input("Enter input string: ")
    expected = input(f"Expected {input_string}: ")
    words = input("Enter words separated by space: ").split()
    if not words:
        print("No words entered.")
    else:
        result = ', '.join(map(str.lower, words))
        if result == expected:
            print(result)
        else:
            print(f"Expected {expected}, got {result} instead.")