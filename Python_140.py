def fix_spaces(text):
    if text.strip().lstrip().startswith(" "):
        return "_" + "".join(["-" if c.isspace() else c for c in text.strip()[1:]])
    return "-".join(["_" if c.isspace() else c for c in text])