def fix_spaces(text: str) -> str:
    text = text.replace("  ", "-").replace(" ", "_")
    return text