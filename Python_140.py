import re

def fix_spaces(text):
    text = re.sub(r'\s+', ' ', text)
    return text.strip()

print("Welcome to the space fixing program!")

text = ""
while True:
    line = input("Enter a line of text (or 'q' if you're done): ")
    if line.lower() == 'q':
        break
    text += line + " "
print(fix_spaces(text))