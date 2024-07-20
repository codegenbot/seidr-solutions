while True:
    text = input("Enter the text: ")
    if not text:
        print("Text cannot be empty. Please try again.")
    else:
        break
while True:
    target = input("Enter the target string: ")
    if not target:
        print("Target cannot be empty. Please try again.")
    else:
        break

import re
result = [m.start() for m in re.finditer(target, text)]
print(result)