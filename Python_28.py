from typing import List

def concatenate():
    while True:
        words = input("Enter words separated by space: ").split()
        if words:
            break
    result = ', '.join(map(str.lower, words))
    print(result)

concatenate()