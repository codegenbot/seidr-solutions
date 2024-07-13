from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(input("Enter a list of strings separated by commas: ").split(","))

print(concatenate([]))