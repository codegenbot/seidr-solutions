def fix_spaces(text):
    def check():
        return " ".join(text.split())

    return check()