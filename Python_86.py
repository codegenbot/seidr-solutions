```
def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        letters = sorted(word)
        new_word = ''.join(letters)
        result.append(new_word)
    return ' '.join(result)