def split_words(txt):
    words = txt.split()
    if not any(char in string.whitespace for char in txt):
        return list(map(int, txt.replace(",", "").lower().split()))
    else:
        return words