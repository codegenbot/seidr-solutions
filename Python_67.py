def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    s = s.replace("apples and ", "").replace("oranges and ", "")
    return n - int(s.split()[0].split(" ")[-1]) - int(s.split()[-1].split(" ")[-1])