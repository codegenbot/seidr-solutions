```
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if not result:
            result = string
        else:
            result += " " + string
    return result


while True:
    user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
    if user_input.lower() == "q":
        break
    if not user_input.strip():
        print("Please enter some strings (or 'q' to quit).")
        continue
    strings = user_input.split()
    print(concatenate(strings))