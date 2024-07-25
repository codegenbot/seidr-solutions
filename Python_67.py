import re

def fruit_distribution(s, n):
    s = s.replace("apples", "1").replace("oranges", "0")
    if 'and' in s:
        parts = []
        for x in re.split(r"(\d+|\band\))", s):
            if x.isdigit() or x == 'and':
                parts.append(x)
    else:
        parts = [x for x in re.split(r"\d+", s)]
    ones = int(s.count('1'))
    zeros = int(s.count('0'))
    total_count = 0
    for i in range(len(parts)):
        if parts[i].isdigit():
            total_count += int(parts[i])
    return n - total_count - ones - zeros