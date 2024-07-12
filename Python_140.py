```
import re


def solve(text):
    return re.sub(r"(\s+)([a-zA-Z])", lambda m: "_" + m.group(2).upper(), text)


text = "Enter your name or title: "
while True:
    print(text)
    user_input = input()
    if user_input.isalpha():  
        break
print(solve(user_input))