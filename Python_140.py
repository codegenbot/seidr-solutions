```
import re

def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    text = ' '.join(text.split())
    return text

while True:
    try:
        text = input("Enter the text to fix spaces: ").strip()
        print(fix_spaces(text))
        break
    except:
        print("Invalid input. Please enter a string.")