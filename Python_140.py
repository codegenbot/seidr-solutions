
def fix_spaces(text):
    text = re.sub(r"\s+", " ", text)
    return text.replace(" ", "")