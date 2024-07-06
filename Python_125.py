```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        try:
            return txt.replace(',', ' ').split()
        except ValueError:
            return sum(1 for c in txt.lower() if ord(c) - ord('a') % 2 == 0)