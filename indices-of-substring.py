text = input("Enter the text: ")
while not text or len(text) == 0:
    print("Text cannot be empty. Please try again.")
    text = input("Enter the text: ")

target = input("Enter the target string: ")
while not target or len(target) == 0:
    print("Target cannot be empty. Please try again.")
    target = input("Enter the target string: ")

import re

result = [m.start() for m in re.finditer(target, text)]
print([i for i in result if i >= 0] or "Target not found in Text")