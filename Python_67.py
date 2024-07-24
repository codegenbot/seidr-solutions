def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    s = s.replace(" oranges", "")
    return n - int("".join(filter(str.isdigit, s))) - 1