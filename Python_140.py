def fix_spaces(text):
    text = text.replace(" ", "_")
    text = text.replace("__", "-")
    text = text.strip("_")
    return text

fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple"