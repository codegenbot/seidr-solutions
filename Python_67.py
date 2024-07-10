def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    if 'apples' not in s or 'oranges' not in s:
        return None
    apples = int(s[s.index("apples") + 6:].replace("and", "").replace("apples ", ""))
    oranges = int(s[s.index(" oranges") + 8:].replace("and", "").replace("oranges ", ""))
    return n - apples - oranges