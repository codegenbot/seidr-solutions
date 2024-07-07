```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ","_-").replace("_  ","_-_").replace("_   ","_-_").replace("_    ","____")