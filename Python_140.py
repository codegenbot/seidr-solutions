```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ", "-").replace("_  ","_-_").replace("_   ","_-_-_").replace("_    ","_-____").replace("_     ","_-_____").replace("_      ","_-______")