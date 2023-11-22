from typing import List

def concatenate(strings: List[str]) -> str:
    return "".join(strings)

strings = input("Enter a list of comma-separated strings: ").strip().split(',')
result = concatenate(strings)
print(result)