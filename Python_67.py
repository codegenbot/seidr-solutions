```
def fruit_distribution(s,n):
    words = s.split()
    count = 0
    for word in words:
        if word.isdigit():
            n -= int(word)
        elif word == 'apples' or word == 'oranges':
            for i in range(words.index(word), len(words)):
                if words[i].isdigit():
                    n -= int(words[i])
                    break
    return n