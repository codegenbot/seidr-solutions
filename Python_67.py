def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    words = s.split()
    if len(words) < 3:
        apples = 0
    elif not any(char.isdigit() for char in ' '.join(words[:-2])):
        apples = 0
    else:
        apples = int("".join(filter(str.isdigit, words[:-2])).split()[1])
    oranges = n - apples
    return oranges