```
import re

''

def solve(text):
    return re.sub(r"\s+", "_", text)

text = input("Enter the text: ")
print(solve(text))