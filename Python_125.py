```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        if ',' in txt:
            return txt.split(',')
        else:
            odd_count = sum(ord(c)-ord('a') for c in txt.lower() if 'bcdfghjklmnpqrstvwxyz'.count(c))
            return odd_count