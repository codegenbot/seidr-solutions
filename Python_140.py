import re


def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")


user_input = input()  # read input from user
fixed_text = fix_spaces(user_input)
print(fixed_text)