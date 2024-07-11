def fruit_distribution(s, n):
    words = s.split()
    apples = 0
    oranges = 0
    for i in range(len(words)):
        if 'apples' in words[i] and int(words[i-1]) > 0:
            apples = int(words[i-1])
        elif 'oranges' in words[i]:
            oranges = int(words[i-1])
    return n - apples - oranges