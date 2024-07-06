import re as regex


def fix_spaces(text):
    text = regex.sub(r"\s+", "_", text)
    return text.replace(" ", "")


user_input = input()
result = fix_spaces(user_input)
print(result)