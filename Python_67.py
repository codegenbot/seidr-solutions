import re


def fruit_distribution(s, total):
    apples = int(re.search(r"\d+", s).group())
    oranges = int(re.search(r"\d+", s).group())
    return (apples * 2) + (oranges * 3) + total