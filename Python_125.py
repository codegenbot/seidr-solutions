```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char in words[0].lower() for char in ',.!'):
        return [word.strip(',.!') for word in words]
    elif ',' not in txt:
        return sum(1 for char in txt.lower() if ord(char) % 2 == 1)
    else:
        return txt.split(',')