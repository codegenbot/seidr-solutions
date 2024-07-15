def fix_spaces(text: str) -> str:
    text = text.replace(" ", "_")
    text = '_'.join(text.split('_'))
    return text