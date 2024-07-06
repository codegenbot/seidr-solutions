```
def anti_shuffle(s):
    words = s.split()
    return ' '.join(''.join(sorted(word)) for word in words)