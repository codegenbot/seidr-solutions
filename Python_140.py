def fix_spaces(text: str) -> str:
    text = text.replace(' ', '_')
    text = text.replace('-', ' ')
    return text