```
from typing import List

def concatenate():
    words = input("Enter words separated by space: ").split()
    if not words:
        return "No words entered."
    if len(words) > 10:
        result = ', '.join(f'"{word}"' for word in words)
    else:
        result = ', '.join(words)
    print(result)

concatenate()