```
def fruit_distribution(s, n):
    s = s.lower()
    numbers_to_remove = "".join(filter(str.isdigit, s))
    for x in s.split():
        if "apple" in x and x not in [y for y in s.split() if "orange" in y]:
            numbers_to_remove += "".join(filter(str.isdigit, x))
        elif "orange" in x:
            numbers_to_remove += "".join(filter(str.isdigit, x))
    n -= int(numbers_to_remove)
    return min(n, 0) if n <= 0 else n