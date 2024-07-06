```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ","_-").replace("_ _", "_-_").replace("___", "-_").replace("_ *_", "_-_*").replace("____", "-_")