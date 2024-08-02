```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        try:
            return txt.replace(",", " ").split()
        except ValueError:
            return sum(ord(c) - ord('a') for c in txt.lower() if 'bcdfghjklmnpqrstvwxyz'.index(c)) // 2 % 3 + 1