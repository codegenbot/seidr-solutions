import re
def fix_spaces(text):
    text = re.sub(r'\s+', '_', text)
    text = re.sub(' +', '_', text)
    return text

text = input("Enter the text to fix spaces: ").strip()
print(fix_spaces(text))