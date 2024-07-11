```
def anti_shuffle(s):
    return ' '.join(''.join(sorted(word)) for word in s.split())