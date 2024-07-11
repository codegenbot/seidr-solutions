```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and words[0].endswith(','):
        return [word.strip(',') for word in words]
    elif ',' not in txt:
        count = sum(1 for char in txt.lower() if ord(char) % 2 == 1)
        return count
    else:
        return words