def fix_spaces(text):
    # Replace all consecutive spaces with a single underscore using a regular expression
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")