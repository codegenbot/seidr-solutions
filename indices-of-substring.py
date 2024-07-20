text = input("Enter the text: ")
target = input("Enter the target string: ")

import re

if target:
    result = [m.start() for m in re.finditer(target, text)]
    if result:
        print(result)
    else:
        print("Target not found in Text")
else:
    print("Please enter a target string.")