from typing import List

def concatenate():
    words = input("Enter words separated by space: ").split()
    if not words:
        return "No words entered."
    result = ', '.join(map(str.lower, words))
    print(result)

concatenate()