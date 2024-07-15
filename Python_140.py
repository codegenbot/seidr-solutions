def fix_spaces(text: str) -> str:
    text = '_'.join(text.split())
    text = '-'.join(text.split('-'))
    return text