from typing import List

def concatenate(words: List[str] = []) -> str:
    if not words:
        return "No words entered."
    result = ', '.join(words)
    return result

words_input = input("Enter words separated by space: ")
print(concatenate(words_input.split()))