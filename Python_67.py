def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    words = s.split()
    apples = 0
    for word in words:
        if "apples" in word or "apple" in word:
            apples = int("".join(filter(str.isdigit, word)))
    oranges = n - apples
    return oranges