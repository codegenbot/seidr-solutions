def fruit_distribution(s, n):
    s = s.lower()
    n -= int("".join(filter(str.isdigit, s)) or "0") + int(
        "".join(filter(str.isdigit, s.split(" ")[1])) or "0"
    )
    return n