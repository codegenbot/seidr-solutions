```Python
from typing import List


def concatenate(strings: List[str]) -> str:
    return ' '.join(map(str, filter(None, strings)))


while True:
    user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
    if user_input.lower().strip() == "q":
        break
    elif not user_input.strip():
        print("Please enter at least one string.")
        continue
    try:
        strings = list(map(str.lower, filter(str.isalpha, user_input.split())))
    except ValueError:
        print("Invalid input. Please enter only alphabets separated by spaces (or 'q' to quit).")
        continue
    print(concatenate(strings))