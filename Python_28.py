from typing import List


def concatenate(strings: List[str]) -> str:
    result = " ".join(strings)
    return result

# Example usage
user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
strings = user_input.split()
print(concatenate(strings))