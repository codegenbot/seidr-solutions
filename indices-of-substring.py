```
text = input("Enter the text: ")
target = input("Enter the target string (or leave blank for no target): ").strip()

import re

if len(text) > 0 and (len(target) > 0 or len(target.strip()) == 0):
    if target:
        result = [m.start() for m in re.finditer(target, text)]
        if result:
            print(result)
        else:
            print("Target not found in Text")
    else:
        print("No target specified. Searching for all occurrences.")
else:
    print("Please enter both a text and target string.")