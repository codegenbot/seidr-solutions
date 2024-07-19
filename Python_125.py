```
def split_words(txt):
    words = txt.split()
    if len(words) > 0 and any(char.isalnum() for char in words[0]):
        return words
    else:
        try:
            return [x.strip() for x in txt.split(',')]
        except ValueError:
            count = sum(1 for c in txt.lower() if ord(c) - ord('a') % 2 == 0)
            return count