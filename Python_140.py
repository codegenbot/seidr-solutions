```
def fix_spaces(text):
    new_text = ""
    for char in text:
        if char != " " or new_text[-1] != " ":
            new_text += char.replace("  ", " -").replace("   ", "- ").replace("    ", "---")
        else:
            new_text += "-"
    return new_text