from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


strings = input("Enter strings (separated by space): ") # printing prompt before reading the user's input
print("Please enter multiple strings separated by a space: ", end="")
strings = input().split()
print(concatenate(strings))