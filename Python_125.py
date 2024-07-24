```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        return sum(1 for char in txt.replace(',', '') if 'a' <= char.lower() <= 'z') % 2 != 0