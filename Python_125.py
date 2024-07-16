```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char in words[0] for char in ',.!'):
        return [word for word in txt.split(',')]
    else:
        return sum(1 for c in txt.lower() if ord(c) - ord('a') % 2 == 1)