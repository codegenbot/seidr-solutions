```
def fix_spaces(text):
    return "".join("-" if i > 0 and text[i-1] == " " else c if c != " " else "_"
                   for i, c in enumerate(text + " "))