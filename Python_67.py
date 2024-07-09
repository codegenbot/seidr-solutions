def fruit_distribution(s, n):
    s = s.lower()
    words = s.split()
    n_apples = int(
        "".join(filter(str.isdigit, [word for word in words if "apples" in word]))
    )
    return n - n_apples