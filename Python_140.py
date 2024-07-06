import re


def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")


user_input = input()
fixed_text = fix_spaces(user_input)
print(fixed_text)