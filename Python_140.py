```python
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char == " " and (not new_text or new_text[-1] != " "):
            new_text += "-"
        elif char != " " or (char == " " and not new_text):
            new_text += char.replace(" ", "_")
    return new_text