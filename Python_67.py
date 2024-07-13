def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "2")
    return (
        n
        - int(s.split()[0].replace("and", "").strip().split()[0])
        - int(s.split()[-1].replace("oranges", "2").replace("apples", "1").strip())
    )