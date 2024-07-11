import re

def fix_spaces(text):
    text = re.sub(r'\s+', ' ', text)
    return text.strip()

print("Welcome to the space fixing program!")

while True:
    text = input("Enter the text to fix spaces (or 'q' to quit): ")
    if text.lower() == 'q':
        break
    print(fix_spaces(text))