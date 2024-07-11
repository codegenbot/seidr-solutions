from typing import List

def concatenate(strings: List[str]):
    return "".join(strings)

result = concatenate(input("Please provide some strings (separated by spaces): ").split())
print(result)