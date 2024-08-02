```
def split_words(txt):
    words = txt.split()
    if len(words) > 1:
        return words
    elif ',' in txt:
        return txt.split(',')
    else:
        result = 0
        for char in txt.lower():
            if ord(char) % 2 == 1 and 'a' <= char <= 'z':
                result += 1
        return result