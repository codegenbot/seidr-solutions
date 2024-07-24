```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        return sum(1 for char in txt if ord(char.lower()) % 2 == 1)