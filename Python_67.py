def fruit_distribution(s, n):
    s = s.lower()
    words = s.split()
    count_apples = int(
        "".join(filter(str.isdigit, [word for word in words if "apples" in word]))
    )
    n -= count_apples
    return n