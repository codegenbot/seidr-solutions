```
def split_words(txt):
    words = txt.split()
    if not any(char in string.whitespace for char in txt) and ',' in txt:
        return txt.replace(',', ' ').split()
    else:
        return sum(1 for c in txt.lower() if ord(c) % 2 == 1)