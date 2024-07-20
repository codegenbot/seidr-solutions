```
while True:
    try:
        text = input("Enter the text: ")
        target = input("Enter the target: ").strip()
        if not text or not target:
            print("Invalid input! Please try again.")
        else:
            break
    except Exception as e:
        print(f"An error occurred: {e}")

import re
result = [m.start() for m in re.finditer(target, text)]
print(result)