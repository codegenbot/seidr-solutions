def split_words(txt):
    words = txt.split()
    if not any(char in word for word in words for char in ",.!"):
        return len(
            [i for i, c in enumerate("abcdefghijklmnopqrstuvwxyz") if ord(c) % 2 != 0]
        )
    else:
        return words