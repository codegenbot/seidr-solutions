````
import re

def fix_spaces(text):
    text = re.sub(r'\s+', ' ', text)
    return text.strip()

while True:
    try:
        text = input("Enter the text to fix spaces: ")
        print(fix_spaces(text))
        break
    except Exception as e:
        print(f"Invalid input. {e}. Please enter a string.")