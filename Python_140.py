def fix_spaces(text):
    return text.replace(" ", "_").replace("  +", lambda x: "-" if i < 2 else "_")