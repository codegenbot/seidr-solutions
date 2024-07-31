```Python
from typing import List


def concatenate(strings: List[str]) -> str:
    return ' '.join(map(str, strings))


while True:
    user_input = input("Enter the strings separated by spaces (or 'q' to quit): ")
    if user_input.lower().strip() == "q":
        break
    elif not user_input.strip():
        print("Please enter at least one string.")
        continue
    strings = list(map(str.strip, user_input.split()))
    strings = [s for s in map(str.lower, strings) if s]
    print(concatenate(strings))