
import re

def fix_spaces(text):
    text = re.sub(r"\s+", "_", text, flags=re.MULTILINE)
    return text.replace(" ", "")

user_input = input()
result = fix_spaces(user_input)
print(result)