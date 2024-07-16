def split_words(txt):
    words = txt.split()
    if not any(char in string.whitespace for char in txt) and "," not in txt:
        return sum(1 for i, c in enumerate(txt.lower()) if ord(c) - ord("a") % 2 == 0)
    else:
        return words