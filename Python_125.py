```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and all(char.isalnum() for char in words[0]):
        return [words[0]]
    elif ',' in txt:
        return txt.split(',')
    else:
        result = sum(1 for char in txt.lower() if ord(char) % 2 == 1)
        return result