def fix_spaces(text):
    text = input()  # read input from user
    text = re.sub(r"\s+", "_", text)
    return text.replace(" ", "")