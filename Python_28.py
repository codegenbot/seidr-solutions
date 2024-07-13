from typing import List

def concatenate() -> str:
    words = input("Enter words separated by space: ").split()
    result = ", ".join(words)
    return result

print(concatenate())