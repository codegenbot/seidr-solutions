from typing import List

def concatenate(*args) -> str:
    result = ", ".join(args)
    return result

print(concatenate(*input("Enter words separated by space: ").split()))