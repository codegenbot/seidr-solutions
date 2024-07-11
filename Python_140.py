import re


def fix_spaces():
    text = input("Enter some text: ")
    return re.sub(r"(\s)+", lambda x: "_" * len(x.group()), text)