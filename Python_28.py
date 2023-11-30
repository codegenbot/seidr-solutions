from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


input_strings = input("Enter a list of strings separated by spaces: ").split()
result = concatenate(input_strings)
print("Concatenated string:", result)