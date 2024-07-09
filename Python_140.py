```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " ":
            result += "-"
        else:
            result += char.replace(" ", "_")
    return result