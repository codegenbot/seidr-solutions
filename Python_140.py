```
import re

def solve(text):
    return re.sub(r"(\s+)([a-zA-Z])", lambda m: "_" + m.group(2).upper(), text)

text = "Enter the text: "
while True:
    try:
        user_input = input(text)
        print(solve(user_input))
        break
    except ValueError:
        print("Invalid input. Please enter a valid sentence.")