```
def fruit_distribution(s, n):
    s = " ".join(s).replace("apples and", "apples ").replace("oranges", " oranges").split()
    apples = int(s[s.index("apples") + len("apples ") :].replace("and", "").replace("apples ", ""))
    oranges = int(s[s.index("oranges") + 7 :].replace("and", "").replace("oranges", ""))
    return n - apples - oranges