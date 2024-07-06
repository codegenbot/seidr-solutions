def fruit_distribution(s, n):
    s = s.lower()
    n -= int(
        "".join(filter(str.isdigit, s))
        + "".join(filter(str.isdigit, [x for x in s if "apple" in x or "orange" in x]))
    )
    return n