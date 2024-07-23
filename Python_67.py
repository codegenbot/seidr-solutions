def fruit_distribution(s, n):
    s = s.replace("apples and ", "").replace("oranges ", ",")
    n = int(n)
    fruits = [x.split()[1] for x in s.split(", ") if x]
    return n - sum(map(int, fruits))