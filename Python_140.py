def fix_spaces(text):
    text = text.replace(" ", "_")
    return "-".join(text.split("_") if "_" in text else [text]).replace("--", "-")