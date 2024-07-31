```Python
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
    if not user_input.lower().strip() == "q":
        print("Program did not receive expected input")
        continue
    if user_input.lower() == "q":
        break
    if not user_input.strip():
        print("Program did not receive expected input")
        continue
    strings = user_input.split()
    print(concatenate(strings))