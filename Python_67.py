def fruit_distribution(s, n):
    s = s.replace("apples and ", "").replace("oranges", "")
    return n - int("".join(map(str, filter(lambda x: x.isdigit() or x == ".", s.split(" or")[0]))).lstrip())