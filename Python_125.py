def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        if ',' in txt:
            return txt.split(',')
        else:
            odd_count = sum(ord(c)-96 for c in txt.lower() if 'bcdfghjklmnpqrstvwxyz'.__contains__(c))
            return odd_count