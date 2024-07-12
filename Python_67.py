def fruit_distribution(s, n):
    words = s.split()
    count_apples = int(
        "".join(filter(str.isdigit, [word for word in words if "apples" in word]))
    )
    return n - count_apples