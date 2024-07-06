```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        return sum(1 for c in txt if 'a' <= c <= 'z' and ord(c) % 2 != 0)