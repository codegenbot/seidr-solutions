```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char in words[0] for char in ',.!?'):
        return words
    elif ',' in txt:
        return txt.split(',')
    else:
        odd_count = sum(1 for i, c in enumerate(map(ord, txt.lower())) if ord('a') <= i <= ord('z'))
        return odd_count