```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    else:
        return sum(1 for c in txt.lower() if ord(c) % 2 == 1)