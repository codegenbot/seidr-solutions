```
import re

def solve(text):
    return re.sub(r"(\s+)([a-zA-Z])", lambda m: "_" + m.group(2).upper(), text)

text = input("Enter the text: ")
print(solve(text))