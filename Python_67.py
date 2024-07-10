```
def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges and", "oranges ")
    if 'apples' not in s or 'oranges' not in s:
        return None
    apples = int(''.join(filter(str.isdigit, s[s.index("apples ") + 7:])) or 0)
    oranges = int(''.join(filter(str.isdigit, s[s.index("oranges ") + 8:])) or 0)
    return n - (apples + oranges)