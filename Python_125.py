```
def split_words(txt):
    words = txt.split()
    if not any(char in word for word in words for char in ',.!?'):
        return len([c for c in txt.lower() if ord(c) % 2 != 0 and 'a' <= c <= 'z'])
    else:
        return words