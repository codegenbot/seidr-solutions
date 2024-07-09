```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace("  ","-_").replace("_ _","_-_").replace("_   _","_-_").replace("_  _","_-_").replace("_     _","_-_").replace("_    _","_-_").replace("_   _","_-_").replace("_  _","_-_").replace("_ _","_-').replace('______','-____-').replace('_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _