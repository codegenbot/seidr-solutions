```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    elif ',' in txt:
        return txt.split(',')
    else:
        result = 0
        for i, c in enumerate(map(chr, range(ord('a'), ord('z')+1))):
            if c.lower() in txt and i % 2 != 0:
                result += 1
        return result