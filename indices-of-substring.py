text = input("Enter the text: ")
target = input("Enter the target: ").strip()

while not text or not target:
    print("Invalid input! Please try again.")
    text = input("Enter the text: ")
    target = input("Enter the target: ").strip()

import re
result = [m.start() for m in re.finditer(target, text)]
print(result)