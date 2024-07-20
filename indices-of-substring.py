```
text = input("Enter the text: ")
while not text:
    print("Text cannot be empty. Please try again.")
    text = input("Enter the text: ")

target = input("Enter the target string: ")
while not target:
    print("Target cannot be empty. Please try again.")
    target = input("Enter the target string: ")

import re

result = [m.start() for m in re.finditer(target, text)]
if result:
    print(result)
else:
    print("Target not found in Text")