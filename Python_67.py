```
import re

def fruit_distribution(s, n):
    s = s.replace("apples and", "apples").replace("oranges", "oranges apples")
    n -= sum(int(num) for num in re.findall(r"\d+", s)) + int(
        re.search(r"\d+", s).group()
    )
    return n