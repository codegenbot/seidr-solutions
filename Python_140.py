```python
def fix_spaces(text):
    new_text = ""
    in_word = False
    for char in text:
        if char != " " and char != "\n":
            if not in_word:
                in_word = True
            new_text += char
        elif char == " ":
            if not in_word:
                new_text += " "
            else:
                new_text += "_ "
            in_word = False
    return new_text.strip()