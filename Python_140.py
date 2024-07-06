def fix_spaces(text):
    text = re.sub(" {2,}", "-", text)
    return text.replace(" ", "_")