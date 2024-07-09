import re

def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    if "oranges" in s:
        apple_count = int(re.search(r'\d+', s).group())
        return n - apple_count - 1
    else:
        return n - int(''.join(filter(str.isdigit, s))) - 1