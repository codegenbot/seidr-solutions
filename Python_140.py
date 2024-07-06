import re

def fix_spaces(text):
    return re.sub(r'\s+', '-', text)

while True:
    text = input("Please enter some text: ")
    if re.search(r'[a-zA-Z0-9]', text):
        break
    else:
        print("Invalid input. Please enter some text that contains at least one letter or digit.")

print(fix_spaces(text))