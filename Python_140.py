```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ","-_").replace("---","-").replace("--","-").replace("- ","_-").replace("_-","_-").replace("_ ","_-').replace('_-','_-')