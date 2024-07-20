text = input("Enter the text: ")
target = target.strip().lstrip().rstrip()

import re

if len(text) > 0 and len(target) > 0:
    result = [m.start() for m in re.finditer(target, text)]
    if result:
        print(result)
    else:
        print("Target not found in Text")
else:
    print("Please enter both a text and target string.")