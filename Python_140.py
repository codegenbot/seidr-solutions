def fix_spaces(text):
    return "-".join(text.replace(" ", "_").split("_ {2,}"))