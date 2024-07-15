def fix_spaces(text: str) -> str:
    text = text.replace(" ", "_")
    text = '-'.join(text.split('-'))
    return text