```
def fix_spaces(text):
    text = ''.join(char if char.isalnum() else '_' for char in text).replace(" ", "_")
    return text