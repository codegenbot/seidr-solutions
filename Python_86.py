```
def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) == 1:
            result.append(word)
        else:
            result.append(''.join(sorted(word)))
    return ' '.join(result)