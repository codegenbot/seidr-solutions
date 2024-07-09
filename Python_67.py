def fruit_distribution(s, n):
    s = s.lower()
    num_apples = int("".join(filter(str.isdigit, s))[:-7])
    return n - num_apples