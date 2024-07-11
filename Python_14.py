from typing import List

def all_prefixes(num_elements: int):
    string = input("Enter a string: ")
    prefixes = [string[:i] for i in range(1, min(num_elements + 1, len(string) + 1))]
    return prefixes