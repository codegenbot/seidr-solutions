```
import re


def fix_spaces(text):
    pattern = r"\s+"
    replacement = "_"
    
    text = re.sub(pattern, replacement, text)
    return text

text = input("Enter a text: ")  
print(fix_spaces(text))