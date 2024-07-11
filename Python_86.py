```
def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        chars = sorted(word)
        result.append(''.join(chars))
    return ' '.join(result)