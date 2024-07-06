```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalpha() for char in words[0]):
        return words
    elif ',' in txt:
        return txt.split(',')
    else:
        result = sum(1 for i, c in enumerate(map(ord, txt.lower())) if ord('a') <= i <= ord('z') and (i+1) % 2 == 1)
        return result