```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    elif ',' in txt:
        return txt.split(',')
    else:
        result = 0
        for i, c in enumerate('abcdefghijklmnopqrstuvwxyz'):
            if c.lower() in txt.lower():
                result += 1
        return result