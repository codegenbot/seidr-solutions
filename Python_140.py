```
def fix_spaces(text):
    return text.strip().replace(" +", " ").replace("--", "-").replace("\n", "").replace(" ", "_")