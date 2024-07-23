```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and len(set(words[0].replace('!','').replace('.','').lower())) == 1:
        return sum(1 for c in set(txt.lower()) if ord(c) % 2 != 0)
    else:
        return words if ',' not in txt else [word for word in txt.split(',') if word]