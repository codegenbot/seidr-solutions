```
def anti_shuffle(s):
    return ' '.join(word[::-1] for word in s.split())