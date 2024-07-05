def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    words = s.split()
    for i in range(len(words)):
        if "apples" in words[i]:
            apples = int("".join(filter(str.isdigit, words[i])))
        elif "oranges" in words[i]:
            oranges = int("".join(filter(str.isdigit, words[i])))
    return n - apples - oranges