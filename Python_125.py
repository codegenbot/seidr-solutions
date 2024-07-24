```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    elif ',' in txt:
        return txt.split(',')
    else:
        result = sum(1 for c in txt.lower() if ord(c) - ord('a') % 2 == 0)
        return result