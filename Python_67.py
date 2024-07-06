def fruit_distribution(s, n):
    apples = int(re.search(r'\d+', s).group())
    oranges = int(re.search(r'\d+', s).group())
    return (apples * n) + (oranges * n)