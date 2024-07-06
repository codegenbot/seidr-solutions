def fruit_distribution(s, n):
    if not s: 
        return None 
    words = s.split()
    for i in range(len(words)):
        if 'apples' in words[i] and str.isdigit(words[i-1]):
            apples = int(words[i-1])
        elif 'oranges' in words[i] and str.isdigit(words[i-1]):
            oranges = int(words[i-1])
    return n - apples - oranges