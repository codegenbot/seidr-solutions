def fix_spaces(text):
    text = text.replace(" ", "_")
    return "-".join(text.split("_")[:-1]) + "_" if " " in text else text