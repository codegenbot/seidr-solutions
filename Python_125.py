def split_words(txt):
    words = txt.split()
    if not any(char in word for word in words for char in " ,"):
        return sum(1 for c in txt.lower() if ord(c) % 2 == 1)
    else:
        return words