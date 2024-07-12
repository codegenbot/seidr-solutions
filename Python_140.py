```
import re


def solve(text):
    words = re.split('(?<=[a-z])[A-Z]', text.upper())
    return '_'.join([word.capitalize() for word in words])


text = input("Enter your name or title: ")
print(solve(text))