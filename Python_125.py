```
def split_words(txt):
    words = txt.split()
    if any(char.isalpha() for char in words[0]):
        return [' '.join(words)]
    elif ',' in txt:
        return txt.split(',')
    else:
        odd_count = sum(1 for char in txt.lower() if 'a' <= char <= 'z' and ord(char) % 2 == 1)
        return [str(odd_count)]