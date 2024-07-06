def fix_spaces(text):
    return text.strip().replace("--", "-").replace(" +", "+").replace("  ", "_")