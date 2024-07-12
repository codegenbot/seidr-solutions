```python
import re

def solve(text):
    return re.sub(r"([a-zA-Z0-9])\1*", r"\1", text).lower()

text = input("Enter the text: ")
print(solve(text))