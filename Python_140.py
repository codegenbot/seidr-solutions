```
def fix_spaces(text):
    text += " "
    new_text = ""
    for char in text:
        if char == " " and (not new_text or new_text[-1] != " "):
            new_text += "-"
        elif char != " ":
            new_text += char
    return new_text.strip()