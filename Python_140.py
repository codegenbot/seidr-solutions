```Python
import re

def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    text = text.strip("_")
    if not text:
        return "N/A"
    return text

text = input("Enter a text: ")
while True:
    try:
        result = fix_spaces(text)
        print(result)
        break
    except Exception as e:
        print(f"Error: {str(e)}")
        print("Please enter valid input. Try again!")
        text = input("Enter a text: ")