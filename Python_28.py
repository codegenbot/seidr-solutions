from typing import List

def concatenate() -> str:
    words = input("Enter words separated by space: ").split()
    if not words:
        return "No words entered."
    result = ', '.join(words)
    return result

print(concatenate())