import re

def fix_spaces(text):
    return re.sub(r"\s{2,}", "-", text.replace(" ", "_"))

user_input = input("Enter the text: ")
result = fix_spaces(user_input)
print(result)