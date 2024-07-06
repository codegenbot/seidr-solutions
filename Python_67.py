import re

def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    return n - int(int(re.search(r'\d+', s.split()[2]).group()))