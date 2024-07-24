```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    else:
        return sum(ord(c) - ord('a') for c in txt.lower().replace(',', '') if 'abcdefghijklmnopqrstuvwxyz'.find(c) != -1) % 2