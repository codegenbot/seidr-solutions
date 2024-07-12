def fix_spaces(text):
    original_text = ""
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            original_text = text[:i+1]
            if original_text[:-1].endswith(" "):
                original_text = original_text[:-1]
            if original_text == text:
                new_text += "_"
            else:
                new_text += "_"
        else:
            if original_text:
                new_text += original_text
                original_text = ""
            new_text += text[i]
    return new_text