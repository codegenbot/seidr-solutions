def fruit_distribution(s1, s2):
    apples = int(re.search(r"\d+", s1).group())
    oranges = int(re.search(r"\d+", s2).group())
    return apples + oranges