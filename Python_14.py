```
from typing import List

def all_prefixes(string: str) -> List[str]:
    return [""] + [string[:i] for i in range(1, len(string) + 1)]

if __name__ == "__main__":
    user_input = input("Enter a string: ")
    while not user_input.isalpha():
        user_input = input("Invalid input. Please enter a string without spaces or special characters: ")
    print(all_prefixes(user_input))