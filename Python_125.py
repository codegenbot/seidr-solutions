```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    elif ',' in txt:
        return txt.split(',')
    else:
        return sum(1 for i, c in enumerate(txt.lower()) if 'a' <= c <= 'z' and (i + ord('a')) % 2 == 1)