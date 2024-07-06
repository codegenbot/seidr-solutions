```
def fix_spaces(text):
    text = "_".join(text.strip().split())
    return text.replace(" ", "_")