def split_words(txt):
    words = txt.split()
    if len(words) == 1:
        words = txt.split(',')
    if len(words) == 1:
        count = sum(1 for char in txt if char.islower() and ord(char) % 2 == 1)
        return count
    return words