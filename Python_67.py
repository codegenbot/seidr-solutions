def fruit_distribution(s, n):
    s = s.replace("apples and", "apples ").replace("oranges ", "oranges ")
    apples, oranges = map(int, s.split()[-2].split())
    return n - apples - oranges