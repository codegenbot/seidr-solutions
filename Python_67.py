def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "oranges apples")
    n -= sum(int(num) for num in filter(str.isdigit, s)) + int(
        "".join(filter(str.isdigit, s.split()[0].split()[-1]))
    )
    return n