from typing import List

def concatenate(*args: str) -> str:
    if not args:
        return "No input provided"
    result = ", ".join(args)
    return result

print(concatenate(*input("Enter words separated by space: ").split()))