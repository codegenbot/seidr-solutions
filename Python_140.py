import re


def fix_spaces():
    text = input().strip()
    text = "_".join(text.split())
    return re.sub(r"\s{2,}", "_", text)


result = fix_spaces()
print(result)