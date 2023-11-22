def split_words(txt):
    return txt.split() if ' ' in txt else txt.split(',') if ',' in txt else sum(1 for c in txt if ord(c.lower()) % 2 != 0)