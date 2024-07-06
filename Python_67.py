def fruit_distribution(s, n):
    s = s.replace(" apples and ", " ")
    s = s.replace(" oranges", "")
    n -= int("".join(filter(str.isdigit, s)).replace(" ", ""))
    return n