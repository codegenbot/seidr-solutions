def split_words(txt):
    return txt.split() or [
        txt[i] for i in range(len(txt)) if ord(txt[i].lower()) % 2 != 0
    ]