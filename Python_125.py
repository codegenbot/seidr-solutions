def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        for char in txt:
            if char.isalpha():
                if ord(char.lower()) % 2 != 0:
                    return len(str(ord(char.lower())))