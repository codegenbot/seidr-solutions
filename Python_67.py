def fruit_distribution(s, n):
    s = s.lower()
    import re
    num_apples = sum(int(x) for x in re.findall(r'\d+', s)) if re.search(r'\d', s) else 0
    return n - num_apples