def fruit_distribution(s, n):
    s = s.lower()
    words = s.split()
    total_apples = int(
        "".join(filter(str.isdigit, [word for word in words if "apples" in word]))
    )
    return n - total_apples