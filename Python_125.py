```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        return sum(1 for c in txt if ord(c.lower()) % 2 == 1)