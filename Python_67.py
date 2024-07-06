```
def fruit_distribution(s,n):
    words = s.split()
    for i in range(len(words)):
        if words[i].lower().endswith('apples') or words[i].lower().endswith('oranges'):
            num = int(words[i-1])
            n -= num
    return n