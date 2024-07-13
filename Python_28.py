from typing import List

def concatenate(words: List[str] = []) -> 'str':
    result = ', '.join(words)
    return result

print(concatenate(input("Enter words separated by space: ").split()))