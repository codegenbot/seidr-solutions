def fix_spaces(text):
    new_text = text.replace(" ", "_")
    return new_text.replace(" " * (i + 1), "_" + "-" * i for i in range(2))[0]