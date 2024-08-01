```
def anti_shuffle(s):
    words = s.split()
    result = []
    for word in words:
        sorted_chars = ''.join(sorted(word))
        result.append(sorted_chars)
    return ' '.join(result)