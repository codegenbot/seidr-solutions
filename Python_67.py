
def fruit_distribution(s, total):
    apples = int(re.search(r"\d+", s).group())
    oranges = int(re.search(r"\d+", s).group())
    return (apples * total) + (oranges * total) 