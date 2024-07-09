```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return "_".join(["_" + s if i > 0 and text[i-1] == " " else s for i, s in enumerate(text) if s != " "]).lstrip("_")