def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    return n - sum(int(x) for x in re.findall("[0-9]+", s))