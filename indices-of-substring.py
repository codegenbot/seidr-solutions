```
while True:
    text = input("Enter the text: ")
    if text:
        break
    print("Text cannot be empty. Please try again.")

while True:
    target = input("Enter the target string: ")
    if target:
        break
    print("Target cannot be empty. Please try again.")

import re

result = [m.start() for m in re.finditer(target, text)]
print([i for i in result if i >= 0])