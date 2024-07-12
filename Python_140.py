```
import re

def solve(text):
    return re.sub(r"(\s+)([a-zA-Z])", lambda m: "_" + m.group(2).upper(), text)

text = "Enter your name or title: "
user_input = input()
print(solve(text + " " + user_input))