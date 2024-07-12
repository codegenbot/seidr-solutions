def split_words(txt):
    words = txt.split()
    if not any(char in string.whitespace for char in txt):
        return [word for word in txt.replace(",", " ").split() if word]
    else:
        return words