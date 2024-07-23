```
def split_words(txt):
    words = txt.split()
    if len(words) > 0:
        return words
    else:
        try:
            return [word.strip('!,.') for word in txt.split(',')]
        except ValueError:
            return sum(1 for c in txt.lower() if ord(c) % 2 == 1)