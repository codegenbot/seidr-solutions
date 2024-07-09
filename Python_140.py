```
def fix_spaces(text):
    return "".join(
        "-" if c == " " and text.count(" ") == 1 else c
        for c in text
    )