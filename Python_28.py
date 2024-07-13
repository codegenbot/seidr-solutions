from typing import List

def concatenate():
    expected = input("Enter expected output: ")
    words = input("Enter words separated by space: ").split()
    if not words:
        print("No words entered.")
    result = ', '.join(map(str.lower, words))
    print(expected)
    print(result)

concatenate()