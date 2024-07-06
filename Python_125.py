```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        try:
            return txt.split(',')
        except ValueError:
            odd_count = sum(ord(c)-ord('a') for c in txt.lower() if 'bcdfghjklmnpqrstvwxyz'.index(c))
            return odd_count