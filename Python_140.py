import re

def fix_spaces(text):
    return re.sub(r'\s{3,}', '-', re.sub(r'\s+', '_', text))

input_text = input("Enter the text: ")
output_text = fix_spaces(input_text)
print(output_text)