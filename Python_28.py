from typing import List

def concatenate() -> str:
    words = input("Enter words separated by space: ").split()
    result = " ".join(", ".join(word) for word in words)
    return result

print(concatenate())