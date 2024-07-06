```
import re

def fruit_distribution(s, n):
    if not any(word in s for word in ['apples', 'oranges']):
        return 0
    if not isinstance(n, int):
        return 0
    
    s = s.replace("apples", "0").replace("oranges", "0")
    parts = list(map(int, re.findall(r"\d+", s)))
    return sum(parts) if len(parts) >= n else 0