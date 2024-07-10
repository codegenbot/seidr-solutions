def fruit_distribution(s, n):
    s = s.replace("apples and ", "0 ")
    s = s.replace("oranges and ", "1 ")
    n = int(n)
    return n - (
        int(s.split()[0].replace("apples", "").replace("orange", ""))
        - int(s.split()[-1].replace("oranges", ""))
    )