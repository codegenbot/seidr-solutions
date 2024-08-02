```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if not new_text or (char == " " and new_text[-1] != " "):
            new_text += char.replace(" ", "_")
        elif char == " " and new_text[-1] == " ":
            new_text += "-"
    return new_text