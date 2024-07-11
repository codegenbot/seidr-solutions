def fruit_distribution(s, n):
    s = s.lower()
    n -= int(
        "".join(filter(str.isdigit, s)).replace("apples and", "").replace("oranges", "")
    )
    return n