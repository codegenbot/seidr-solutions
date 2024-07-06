```
def split_words(txt):
    words = txt.split()
    if not any(char in string.whitespace for char in txt):
        return txt.replace(',', '').lower().count(chr(i)) for i in range(ord('a'), ord('z')+1) if chr(i).lower() in txt
    else:
        return words