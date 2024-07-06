def fruit_distribution(s, n):
    s = s.replace("apples and ", "").replace("oranges", "")
    return max(0, n - int("".join(map(str, filter(lambda x: x.isdigit() or x == ".", s))).strip()))