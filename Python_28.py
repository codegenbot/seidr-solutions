from typing import List

def concatenate(input_string: str) -> str:
    words = input_string.split()
    result = " ".join(words)
    return result

print(concatenate(input("Enter words separated by space: ")))