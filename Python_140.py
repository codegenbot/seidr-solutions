```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " " and len(new_text) > 0 and new_text[-1] == " ":
            if len(new_text) < 3:
                return text
            else:
                new_text += "-"
        elif char != " " or (char == " " and len(new_text) == 0):
            new_text += char.replace(" ", "_")
    return new_text