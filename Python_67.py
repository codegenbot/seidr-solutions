import re


def fruit_distribution(s):
    apples = int(re.findall("\d+", s)[0])
    oranges = int(re.findall("\d+", s)[1])
    return apples + oranges