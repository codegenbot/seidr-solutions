```
def split_words(txt):
    words = txt.split()
    if any(char.isalnum() for char in txt):
        return words
    elif any(char == ',' for char in txt):
        return words.split(',')
    else:
        return sum(1 for i, c in enumerate(map(ord, txt.lower())) if ord('a') <= i <= ord('z') and (i+1) % 2 != 0)