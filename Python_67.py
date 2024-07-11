def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    words = s.split()
    for word in words:
        if word.isdigit():
            n -= int(word)
        elif word == 'apples' or word == 'oranges':
            break
    return n