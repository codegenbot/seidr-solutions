```Python
import re

def fix_spaces(text):
    text = re.sub(r'\s+', ' ', text)
    return text.strip()

print("Welcome to the space fixing program!")

text = ""
while True:
    try:
        line = input("Enter a line of text (or 'q' if you're done): ")
    except:
        print(fix_spaces(text))
        break
    if line.lower() == 'q':
        print(fix_spaces(text))
        break
    text += line + " "
print(fix_spaces(text))