def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "oranges apples")
    if len(s.split()) > 1:
        n -= int("".join(filter(str.isdigit, s.split(" ")[1])))
    return n