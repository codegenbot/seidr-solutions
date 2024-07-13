from typing import List

def concatenate():
    expected = input("Enter expected output: ")
    words = input("Enter words separated by space: ").split()
    if not words:
        print("No words entered.")
    result = ', '.join(map(str.lower, words))
    if result == expected:
        print(result)
    else:
        print(f"Expected {expected}, got {result} instead.")