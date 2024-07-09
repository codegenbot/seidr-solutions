```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            if (i >= len(text) - 2 or text[i + 1] != " ") and (new_text and not new_text.endswith("_") or (new_text and new_text[-1] != " ")):
                new_text += "_"
            elif i < len(text) - 1 and text[i + 1] == " ":
                if not new_text or new_text.endswith("-"):
                    new_text += "-"
        else:
            new_text += text[i]
    return new_text