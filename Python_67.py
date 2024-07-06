def fruit_distribution(s, count):
    apples = int(re.search(r"\d+", s).group())
    oranges = int(re.search(r"\d+", s).group())
    return (apples * count) + (oranges * count)