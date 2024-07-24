```
def split_words(txt):
    words = txt.split()
    if any(char.isalpha() for char in words[0]):
        return [' '.join(words)]
    elif any(char == ',' for char in txt):
        return txt.replace(',', ' ').split()
    else:
        return sum(1 for c in txt.lower() if ord(c) % 2 != 0)