def fruit_distribution(s, n):
    s = s.replace(" apples", " 0 apples").replace(" oranges", " 0 oranges")
    return (
        n
        - sum(int(i) for i in s.split() if i.isdigit())
        - 2 * (s.count("apples") + s.count("oranges"))
    )