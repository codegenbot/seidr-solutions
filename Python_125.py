```
def split_words(txt):
    words = txt.split()
    if any(char in word for word in words for char in ' ,'):
        return words
    else:
        result = 0
        for i, c in enumerate([c for c in txt.lower() if c.isalpha()]):
            if ord(c) % 2 == 1:
                result += 1
        return result