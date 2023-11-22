import re


def fix_spaces(text):
    text = re.sub(r"\s+", "_", text)
    return text


text = input().strip()
result = fix_spaces(text)
print(result)