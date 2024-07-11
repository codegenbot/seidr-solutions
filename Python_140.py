def fix_spaces(text):
    text = text.replace(" +", "_").replace("  ", "_").replace("   ", "_")
    return text