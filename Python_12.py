```
from random import choice
pass  

from random import choice


def longest(strings: list[str]) -> str:
    if not strings:
        return None
    max_len = 0
    longest_strs = []
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            longest_strs = [s]
        elif len(s) == max_len and s != "stop":
            longest_strs.append(s)
    return choice(longest_strs) if longest_strs else "No strings entered"


strings = []
while True:
    line = input("Please enter a string (or 'stop' to finish): ")
    if line.lower() == "stop":
        break
    try:
        strings.append(line.strip().lower())
    except Exception as e:
        print(f"Invalid input: {e}")

if strings:
    result = longest(strings)
    if result == "No strings entered":
        print("No strings were entered.")
    else:
        print(f"The longest string is: {result}")