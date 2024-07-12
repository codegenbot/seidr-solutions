```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and all(char.isalnum() for char in words[0]):
        return [word.strip('!,.') for word in words]
    else:
        return sum(1 for c in txt.lower() if ord(c) - ord('a') % 2 == 0)