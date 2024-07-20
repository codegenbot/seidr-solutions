```
text = None
target = None

while True:
    try:
        text = input("Enter the text: ")
        target = input("Enter the target: ")
        if not isinstance(text, str) or not isinstance(target, str):
            raise ValueError
        break
    except (ValueError, EOFError):
        print("Invalid input. Please enter a string.")

import re

if len(text) > 0 and len(target) > 0:
    result = [m.start() for m in re.finditer(target, text)]
    if result:
        print(result)
    else:
        print("Target not found in Text")
else:
    print("Please enter both a text and target string.")