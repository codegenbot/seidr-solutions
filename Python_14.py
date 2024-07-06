from typing import List

def all_prefixes(string: str) -> List[str]:
    return [""] + [string[:i] for i in range(1, len(string) + 1)]

try:
    print(all_prefixes(input("Enter a string: ")))
except ValueError:
    print("Invalid input. Please enter a valid string.")