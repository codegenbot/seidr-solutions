```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    if ',' in txt:
        return txt.split(',')
    else:
        result = sum(1 for char in txt.lower() if ord('a') <= ord(char) <= ord('z') and (ord(char) - ord('a')) % 2 == 1)
        return result