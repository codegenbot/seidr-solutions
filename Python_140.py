```
import re

def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    text = text.strip("_")
    if not text:
        return "N/A"
    return text

while True:
    text = input("Enter a text: ")
    if text.isalpha() or text == "":
        result = fix_spaces(text)
        print(result)
        break
    else:
        print("Invalid input. Please enter a string of alphabets.")