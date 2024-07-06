```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    else:
        return sum(1 for char in txt.lower() if ord(char) % 2 == 1)