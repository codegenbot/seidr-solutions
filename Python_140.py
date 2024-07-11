```
def fix_spaces(text):
    text = text.replace(" ", "_")
    return "".join(["_" if i == j or (text[i] != " " and text[j] != " ") else "-" for i in range(len(text)) for j in range(i+1, len(text)) if text[i:].startswith(" " * (j - i))]).replace("_", "", 1) + "_".join(text.split())