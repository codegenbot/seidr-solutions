```Python
import re

def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = list(map(int, re.findall(r"\d+", s)))
    return sum(parts) if len(parts) >= n else 0