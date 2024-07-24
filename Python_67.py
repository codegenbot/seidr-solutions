def fruit_distribution(s, n):
    s = (
        s.replace("apples and ", "")
        .replace(" apples and ", "")
        .replace(" oranges and", "")
        .replace(" oranges and ", "")
    )
    a = int("".join(filter(str.isdigit, s)))
    return n - a