def fix_spaces(text: str) -> str:
    return text.replace(" ", "_").replace("__", "_").replace("_", "-")