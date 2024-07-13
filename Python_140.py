def fix_spaces(text):
    text = text.replace(" ", "_")
    while "_" in text:
        text = text.replace("__", "_-").replace("_  ", "_- ").replace("_   ", "_-   ")
    return text