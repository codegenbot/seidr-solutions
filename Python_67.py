def fruit_distribution(s, n):
    s = s.lower()
    num_apples = int(''.join(map(str, filter(int, re.finditer(r'\d+', s)))).lstrip('0') or 0)
    return n - num_apples