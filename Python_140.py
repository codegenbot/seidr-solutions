```
import re


def solve(text):
    return re.sub(r"(\s+)([a-zA-Z])", lambda m: "_" + m.group(2).upper(), text)


print(solve(input("Enter your name or title: ")))