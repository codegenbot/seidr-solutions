```
import re


def solve(text):
    return re.sub(r"\D+(?=\s*:)|(\s+)([a-zA-Z])", lambda m: "_" + m.group(2).upper() if m.group(1) else "", text)


text = "Enter your name or title: "
user_input = input()
print(solve(user_input))