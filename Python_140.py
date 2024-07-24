Here is the corrected code:

```
def fix_spaces(text):
    if text.strip().startswith(" "):
        new_text = "-"
    elif text.isspace():
        return " "
    else:
        new_text = ""
        add_hyphen = False
        for char in text:
            if char.isalnum():
                new_text += char
                add_hyphen = False
            elif char in ["-", "_"]:
                new_text += char
                add_hyphen = True
            elif char.isspace() or (char.isspace() and not add_hyphen):
                if len(new_text) > 0:
                    new_text += "-"
                else:
                    new_text += " "
                add_hyphen = False
            else:
                new_text += "-"
                add_hyphen = True
    return new_text