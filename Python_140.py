def fix_spaces(text):
    return text.strip().replace(" +", " ").strip().replace("--", "-").replace("\n", "").strip().replace(" ", "_")