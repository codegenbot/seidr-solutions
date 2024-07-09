import re


def fruit_distribution(s, n):
    s = s.lower()
    num_apples = int(sum(map(int, re.findall("\d+", s))) or 0)
    return n - num_apples