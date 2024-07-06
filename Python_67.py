
def fruit_distribution(s, n):
    apples, oranges = map(int, re.findall(r'\d+', s))
    return n - apples - oranges