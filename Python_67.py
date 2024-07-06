def fruit_distribution():
    s = input()
    n = sum(1 for _ in re.finditer(r'\D+', s))
    return n - len(re.findall(r'0+', s))