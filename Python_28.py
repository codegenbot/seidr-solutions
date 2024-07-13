from typing import List

def concatenate(words: List[str] = []) -> str:
    result = ', '.join(words)
    return result

words = input("Enter words separated by space: ").split()
print(concatenate(words))