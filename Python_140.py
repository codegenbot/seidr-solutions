```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ","_-").replace("_  ","_-_").replace("   ","_-_").replace("_   ","_-_").replace("    ","_-_").replace("_    ","_-_").replace("___","_-_").replace("____","_-_").replace("____","_-_").replace("_____","_-_")