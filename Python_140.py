```
def fix_spaces(text):
    return "".join(c if c != " " else "_" for c in text)