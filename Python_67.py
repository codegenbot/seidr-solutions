def fruit_distribution(s, n):
    s = s.lower()
    num_apples = int("".join(filter(str.isdigit, s)).lstrip('0') or 0) if ''.join(filter(str.isdigit, s)) else 0
    return n - num_apples