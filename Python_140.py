```
import re

def fix_spaces(text):
    text = re.sub(r'\s+', ' ', text)
    return text.strip()

print("Welcome to the space fixing program!")

while True:
    try:
        text = input("Enter the text to fix spaces: ")
        if not text.strip():  
            print("Please enter a non-empty string.")
        else:
            break
    except Exception as e:
        print(f"Invalid input. {e}. Please enter a string.")