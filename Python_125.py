```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        txt = txt.replace(',', ' ')
        words = txt.split()
        if len(words) > 0:
            return words
        else:
            result = sum(1 for char in txt.lower() if ord(char) % 2 == 1)
            return result