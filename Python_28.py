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

    strings = [s for s in map(str, user_input.split()) if s]
    
    if not strings:
        print("No valid strings entered. Please try again.")
        continue
    
    print(concatenate(strings))