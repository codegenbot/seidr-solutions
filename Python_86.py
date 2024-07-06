```
def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        chars = sorted(word)
        new_word = ''.join(chars)
        result.append(new_word)
    return ' '.join(result)