def fix_spaces(text):
    return "_".join([word for word in text.strip().split(" ") if word])