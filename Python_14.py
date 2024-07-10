from typing import list

def all_prefixes() -> list:
    input_string = input("Enter a string: ")
    return [input_string[:i] for i in range(1, len(input_string) + 1)]