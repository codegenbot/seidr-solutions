```
import re


def solve(text):
    return re.sub(r"[^a-zA-Z]*([a-zA-Z])[^a-zA-Z]*", lambda m: "_" + m.group(1).upper(), text.lower())


text = input("Enter your name or title: ")
print(solve(text))