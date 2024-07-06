```python
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " ":
            if len(new_text) > 0 and new_text[-1] != " ":
                new_text += "_" if text.index(char) < len(text) - 1 else "-"
            else:
                continue
        else:
            new_text += char
    return new_text