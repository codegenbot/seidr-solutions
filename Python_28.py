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
    strings = [s for s in map(str.lower, map(lambda x: x[0] if x else [''], user_input.split())) if any(s)]
    print(concatenate(strings))