```Python
from typing import List

def concatenate() -> str:
    words = input("Enter words separated by space: ").split()
    if not words:
        return "No words entered."
    if len(words) > 1:
        result = ', '.join(words)
    else:
        result = words[0]
    return result

print(concatenate())