def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    if 'apples' not in s:
        raise ValueError("Apples not found")
    if 'oranges' not in s:
        raise ValueError("Oranges not found")

    apples = int(' '.join(s[s.index('apples') + 1:]).replace("and", "").replace("apples", ""))
    oranges = int(' '.join(s[s.index('oranges') + 7:]).replace("and", "").replace("oranges", ""))

    return n - apples - oranges