```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            if and (i >= len(text) - 2 or text[i + 1] != " ")":
                if new_text and not new_text.endswith("_"):
                    new_text += "_"
            else:
                if new_text and not new_text.endswith("-") or (new_text and new_text[-1] != " "):
                    new_text += "-"
        else:
            new_text += text[i]
    return new_text