```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return text.replace(" "+{" ": "-", "_ ": "-_", " _": "_-"}.get(text[0:2], " ") + "_").replace("_  ", "_-").replace("_   ", "_---").replace("_    ", "_----").replace("_     ", "_-----")