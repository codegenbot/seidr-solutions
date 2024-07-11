```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char in words[0] for char in ',.!'):
        return [word.strip('.,!') for word in words]
    else:
        return sum(1 for c in txt.lower() if ord(c) - ord('a') % 2 == 0)