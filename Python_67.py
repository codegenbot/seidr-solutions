def fruit_distribution(s, n):
    words = s.split()
    mango_count = n - (
        int("".join(filter(str.isdigit, s)))
        + int(words[-2].split()[0].replace("apples and ", ""))
    )
    return mango_count